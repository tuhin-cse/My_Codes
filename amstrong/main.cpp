#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,c,i,j,t,s,l,test;
   cin >> t;
   while(t--)
   {
     cin >> a;
     l=(int)log10(a)+1;
     s=0;
     b=a;
     while(b)
     {
         s+=pow(b%10,l);
         b/=10;
     }
     if(s==a)
        cout <<"Armstrong" << endl;
     else
      cout <<"Not Armstrong" << endl;
    }


}
