#include <iostream>
#include<algorithm>
#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t=0;
    while(cin >> n)
    {
        if(n==0)
            break;
        double x[2*n],y[2*n],dis[2*n];
        string nm;
        for(int i=0;i<2*n;i++)
        {
            cin >> nm >> x[i] >> y[i] ;

        }
        int a[2*n];
        memset(a,9999999,2*n);

        for(int i=0;i<2*n;i++)
        {
            for(int j=0;j<2*n;j++)
            {
                double temp;
                if(i!=j)
                {
                    double tx = (x[i]-x[j])*(x[i]-x[j]);
                    double ty = (y[i]-y[j])*(y[i]-y[j]);
                    double tz = tx+ty;
                    if(tz < 0)
                        tz*=(-1);
                    temp=sqrt(tz);
                    if(temp<a[i])
                        a[i]=temp;
                }
            }
        }
        double r =0;
        for(int i=0;i<2*n;i++)
            r+=a[i];

        cout << "Case " << ++t << ": " <<fixed << setprecision(2) << r << endl;
    }
    return 0;
}
