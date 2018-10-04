#include <bits/stdc++.h>

using namespace std;

int binary_search(int a[],int s,int e,int c)
{
    int mid=(s+e)/2;
    if(a[mid]>=c && a[mid-1]<c)
        return mid+1;
    else if(c<a[mid])
        binary_search(a,s,mid-1,c);
    else
        binary_search(a,mid+1,e,c);
}
int main()
{
    int t,z,x,sum=0;
    cin >> t;
    int a[t];
    for(int i=0;i<t;i++)
    {
        cin >> x ;
        sum+=x;
        a[i]=sum;
    }
    int q;
    cin >> q;
    for(int i=0;i<q;i++)
    {
       cin >> x ;
       if(x>sum)
          cout << "-1" << endl;
       else
          cout << binary_search(a,0,t-1,x) << endl;
    }


    return 0;
}
