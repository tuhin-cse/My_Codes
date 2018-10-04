#include <bits/stdc++.h>

using namespace std;

int count(int n,int c)
{
    int cc=0;
    while(n)
    {
        cc+=n/c;
        n/=c;
    }
    return cc;
}
int faccount(int n,int c)
{
    int cc=0;
    while(n%c==0)
    {
        cc++; n/=c;
    }
    return cc;
}
int solve(int n,int r,int p,int q)
{
   int c2=0,c5=0,c;

   c2+=count(n,2);        c5+=count(n,5);
    c2-=count(r,2);        c5-=count(r,5);
     c2-=count(n-r,2);      c5-=count(n-r,5);
      c2+=faccount(p,2)*q;    c5+=faccount(p,5)*q;

   return min(c2,c5);
}

int main()
{
    int t,n,r,p,q,c=0;
    cin >> t;
    while(t--)
    {
        cin >> n >> r >> p >> q ;
        cout << "Case "<< ++c << ": " <<  solve(n,r,p,q)<< endl;
    }
    return 0;
}
