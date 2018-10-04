#include <iostream>


using namespace std;

int main()
{
    int a[3][3];
    char c[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           cin>>a[i][j];
           c[i][j]='1';
        }
    }

     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           if(a[i][j]%2==1)
           {
               if(c[i][j]=='1')
                  c[i][j]='0';
               else
                  c[i][j]='1';

               if(i>0)
               {
                   if(c[i-1][j]=='1')
                      c[i-1][j]='0';
                   else
                      c[i-1][j]='1';

               }
                if(j>0)
               {
                   if(c[i][j-1]=='1')
                      c[i][j-1]='0';
                   else
                      c[i][j-1]='1';

               }
                if(i<2)
               {
                   if(c[i+1][j]=='1')
                      c[i+1][j]='0';
                   else
                      c[i+1][j]='1';

               }
                if(j<2)
               {
                   if(c[i][j+1]=='1')
                      c[i][j+1]='0';
                   else
                      c[i][j+1]='1';

               }
           }
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           cout<<c[i][j];
        }
        cout<<"\n";
    }

    return 0;
}
