#include <iostream>

using namespace std;

int main()
{
    int a=0,b=0,l=0,pa=0,ml=0;
    string c;
    cin>>c;
    int fa=0,fb=0,fc=0;
    for(int x=0;x<c.size();x++)
    {
    for(int i=x;i<c.size(); )
    {

       if(c[i]=='a'&&fa==0)
       {
           for(int j=i;c[j]!='b';j++)
           {
               if(j==c.size())
               {
                   break;
               }
            fa=1;
             i++;
             l++;
           }

       }
       else if(c[i]=='b'&&fb==0)
       {
            for(int j=i;c[j]!='a';j++)
            {
                if(j==c.size())
               {
                   break;
               }
            fb=1;
             i++;
             l++;
           }
       }
       else if(c[i]=='a'&&fc==0)
        for(int j=i;c[j]!='b';j++)
            {
            if(j==c.size())
               {
                   break;
               }
            fc=1;
             i++;
             l++;

            }
        else
            i++;
    }
    if(l>ml)
        ml=l;
    fa=0;
    fb=0;
    fc=0;
    l=0;
    }
    cout<<ml<<endl;
}
