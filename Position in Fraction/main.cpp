#include <iostream>

using namespace std;

int main()
{
     float a,b;int c;cin>>a>>b>>c;
     a=a/b;int cn=0;
     while(true)
     {
         cn++;
         a*=10;
         int x=(int)a%10;
         if(x==c)
         {
             cout<<cn<<endl;
             return 0;
         }
         if(cn==1000)
         {
             cout<<"-1"<< endl;
             return 0;
         }
     }


    return 0;
}
