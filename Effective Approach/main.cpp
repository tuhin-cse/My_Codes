#include <iostream>
#include <stdio.h>

using namespace std;
int in[100005];
int main()
{
    int l,t,ll;
    scanf("%d",&l);
    for(int i=0;i<l;i++)

    {
        scanf("%d",&t);
        in[t]=i;
    }
    long long x=0,y=0;
    scanf("%d",&ll);
    while(ll--)
    {
        scanf("%d",&t);
        x+=in[t]+1;
        y+=l-in[t];
    }
    cout << x << " " << y << endl;
    return 0;
}
