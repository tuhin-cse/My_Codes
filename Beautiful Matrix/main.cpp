#include <iostream>

using namespace std;

int main()
{
    int a[5][5],x,y;
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
        {
           cin>>a[i][j];
        }
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
        {
           if(a[i][j]==1)
             {
                 x=i-2;
                 y=j-2;
                 if(x<0)
                    x*=(-1);
                 if(y<0)
                    y*=(-1);
                 cout<<x+y<<endl;
                 return 0;

             }
        }
}
