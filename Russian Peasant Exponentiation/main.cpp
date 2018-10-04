#include <bits/stdc++.h>

using namespace std;

long long power(long long a,long long b,long long m)
{
    long long res=1;
    a=a%m;
    while(b)
    {
        if(b&1)
            res=(res*a)%m;
        b>>=1;
        a=(a*a)%m;
    }
    return res;
}

int main()
{
    long long a,b,k,m,c=0,d=0,temp;
    cin >> a >> b >> k >> m;
    for(long long i=k,j=0;i>=0;i--,j++)
    {
        temp=power(a,i,m);
        temp*=power(b,j,m)%m;;
        if(j%4==0)
            c+=temp;
        else if(j%4==1)
            d+=temp;
        else if(j%4==2)
            c-=temp;
        else if(j%4==3)
            d-=temp;
    }
    cout << c << " " << d ;
    return 0;
}
