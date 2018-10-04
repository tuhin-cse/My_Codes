#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int x[n];
    for(int i=0;i<n;i++)
        cin >> x[i] ;

    int low=100000,a,b;
    int tc=0;int j=0;
    for(int i=0; ;i++)
    {
       if(i==n)
       {
           i=0;
           tc++;
       }

       j=i+1;
       if(j==n)
        j=0;
       int temp=abs(x[i]-x[j]);
       if(temp < low)
       {
           low = temp;
           a=i;b=j;
       }

       if(tc==2)
         break;
    }
    cout << ++a << " " << ++b << endl;
    return 0;
}
