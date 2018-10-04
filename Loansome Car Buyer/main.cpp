#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,d;double b,c;
    while(cin>>a>>b>>c>>d)
    {
        double x=c+b;
        double m=c/a;
        if(a<0||b<0||c<0||d<0)
            break;
        double pr[a];
        for(int i=0;i<a;i++)
            pr[i]=0;

        for (int i=0;i<d;i++)
        {
            int z;cin >> z;
            cin >> pr[z];
        }
        for(int i=0;i<a;i++)
        {
            if(pr[i]==0)
               pr[i]=pr[i-1];
        }
        for(int i=0;i<a;i++)
        {
            x-=(x*pr[i]);
            if(i!=0)
                   c-=m;
            if(c<=x)
            {
                i==1? cout <<"1 month" <<endl : cout << i << " months" << endl;
                break;
            }
        }
    }
    return 0;
}
