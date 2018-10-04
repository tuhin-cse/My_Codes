#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int l,int u,int x)
{
    int mid;
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
    int n,q,Case=0;
    while(cin >> n >> q)
    {
        if(n==0 && q==0)
            break;
        int a[n],b[q];

        for(int i=0;i<n;i++)
            cin >> a[i];

        for(int i=0;i<q;i++)
            cin >> b[i];
        sort(a,a+n);

        cout << "CASE# " << ++Case << ":" << endl;
        for(int i=0;i<q;i++)
        {
            int pos = binarySearch(a,0,n-1,b[i]);
            if(pos==-1)
                cout << b[i] << " not found" << endl;
            else
               {
                   cout << b[i] << " found at " << pos+1 << endl;
               }
        }

    }

    return 0;
}
