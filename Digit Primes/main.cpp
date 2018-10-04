#include <iostream>
#include <cstring>
#include <stdio.h>

using namespace std;
bool p[1000001] = {0};
int main()
{
    bool p[1000001]={0},q[1000001]={0};
    p[1]=1;
    for(int i=2;i*i<=1000000;i++)
    {
        for(int j=i*i;j<=1000000;j+=i)
            p[j]=1;
    }
    for(int i=2;i<=1000000;i++)
    {
        if(p[i]==0)
        {
            int x=i,s=0;
            while(x)
            {
             s+=(x%10);x/=10;
            }
            if(p[s]==0)
                  q[i]=1;
        }
    }
    int c,t;scanf("%d",&t);
    while(t--)
    {
        c=0;
        int a,b;
        scanf("%d %d",&a,&b);
        for(int i=a;i<=b;i++)
        {
            if(p[i]==0&&q[i]==1)
            {
               c++;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
