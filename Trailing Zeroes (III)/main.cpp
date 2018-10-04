#include <iostream>
#include <cstdio>

using namespace std;
int cc=0;

void solve(int n)
{
    int count =0,mm=0,nn=n,ans;
    mm=n/5;
    for(int i=n-mm; ;i++)
    {
        count=0;
        int z=i*5;
        ans=z;
        while(z)
        {
            count+=(z/5);
            z/=5;
        }
        if(count==n)
        {
            printf("Case %d: %d\n",++cc,ans);
            return;
        }
        else if(count>n)
        {
            printf("Case %d: impossible\n",++cc);
            return;
        }
    }
}

int main()
{
    int t,n;
    scanf("%d",&t) ;
    while(t--)
    {
        scanf("%d",&n);
        solve(n);
    }
    return 0;
}
