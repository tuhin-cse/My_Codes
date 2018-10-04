#include <iostream>

using namespace std;
int binarySearch(long long arr[],int l,int u,int x,int s)
{
    int mid;
    if(u>=l)
    {
         mid=l+(u-l)/2;
        if(mid==s && arr[mid]<x)
            return mid;
        else if(arr[mid]<x && arr[mid+1]>=x)
             return mid;
        else if(x>arr[mid])
            return binarySearch(arr,mid+1,u,x,s);
        else
            return binarySearch(arr,l,mid-1,x,s);
    }
      return -1;
}

int main()
{
    int m,n;
    cin >> m;
    long long a[m];
    for(int i=0;i<m;i++)
        cin >> a[i];
    cin >> n;
    long long b[n];
    for(int i=0;i<n;i++)
        cin >> b[i];

    for(int i=0;i<n;i++)
    {
        int index = binarySearch(a,0,m-1,b[i],m-1);
        int sindex=index+1;
        while(a[sindex]==b[i] && sindex < m)
            sindex++;
        if(index==-1)
            cout << "X " << a[sindex] << endl;
        else if(sindex>=m)
            cout << a[index] << " X" << endl;
        else
            cout << a[index] << " " << a[sindex] << endl;
    }
    return 0;
}
