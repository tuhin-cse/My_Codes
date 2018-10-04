#include <bits/stdc++.h>
int pos;
int it;
using namespace std;
int binarySearch(int arr[],int l,int u,int x)
{
    int mid;
    it++;
    if(u>=l)
    {
        mid=l+(u-l)/2;
        if(arr[mid]==x && arr[mid-1]!=x)
            return mid;
        else if(x>arr[mid])
            return binarySearch(arr,mid+1,u,x);
        else
            return binarySearch(arr,l,mid-1,x);
    }
    return -1;
}

int main()
{
    int a[10];
    it=0;
    for(int i=0;i<10;i++)
       cin >> a[i];
    sort(a,a+10);
    int x;
    cout << "Enter the value to search : " ;
    cin >>x;
    int in = binarySearch(a,0,9,x);

    if(in!=-1)
    {
        cout << "Found in position :" << in+1 << endl;
        cout << "Iteration : " << it << endl;
        return 0;
    }
    cout << "Not found" << endl;
    return 0;
}
