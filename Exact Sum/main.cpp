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
    int n;
    while(cin >> n)
    {
        int a[n];
        for(int i=0;i<n;i++)
            cin >> a[i];
        sort(a,a+n);
        int x,f=0,l=n-1,m=n-1,pm;
        cin >> x;

        for(int i=n-1;i>=0;i--)
        {
            int z=(x-a[i]);
            if(z>=a[i])
            {
                int zz=binarySearch(a,0,n-1,z);
                if(zz>=0 && i!=zz)
                {
                   cout << "Peter should buy books whose prices are "<< a[i] << " and " << a[zz]  << "." << endl;
                   break;
                }
            }
        }
        cout << "\n";
    }

    return 0;
}
