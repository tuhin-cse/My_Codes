#include <iostream>

using namespace std;

int main()
{
    int n,m=0,h=1000000,t;
    cin >> n;

    for(int i=0;i<n;i++)
       {
           cin >> t;
           if(t<=500000)
           {
               if(t>m)
                  m=t;
           }
           else
           {
               if(h>t)
                 h=t;
           }
       }
    (1000000-h) > (m-1) ? cout << 1000000-h << endl : cout << m-1 << endl;
     return 0;
}
