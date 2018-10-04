#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
        int l;
        cin>>l;
        double r=l/5.0;
        double red = M_PI*r*r;
        double w = l*.6;
        double green = (l*w)-red;
        printf("%.2f %.2f\n",red,green);
   }
}
