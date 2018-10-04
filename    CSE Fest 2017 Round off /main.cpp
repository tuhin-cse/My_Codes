#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

int main()
{
    double fm;
    cin>>fm;

    cout<<setprecision(7)<<fm<<endl;
    int a=(int)fm;
    int f=(int)(fm*1000000);
    int dd=1000000,z=6;
    int flag=0;
    while(1)
    {
        z--;
        dd/=10;
        int d=(int)f%10;
        if(d==0&&flag!=0)
        {
            int xx=f/10;
            cout<<xx/dd<<".";
            int zz=xx%dd;
            int l=0;
            while(zz)
            {
                l++;
                zz/=10;
            }
            for(int i=0;i<z-l;i++)
                cout<<"0";
             if(xx%dd!=0)
                cout<<xx%dd<<endl;
            else
                cout<<"\n";
            cout<<"No change"<<endl;
        }
        if(d>4)
        {
            int xx=f/10;
            cout<<xx/dd<<".";
            int zz=xx%dd;
            int l=0;
            while(zz)
            {
                l++;
                zz/=10;
            }
            for(int i=0;i<z-l;i++)
                cout<<"0";
             if(xx%dd!=0)
                cout<<xx%dd<<endl;
            else
                cout<<"\n";
            cout<<"Round Up"<<endl;
            f+=10;
            flag=1;

        }
        if(d<5&&d>0)
        {
          int xx=f/10;
            cout<<xx/dd<<".";
            int zz=xx%dd;
            int l=0;
            while(zz)
            {
                l++;
                zz/=10;
            }
            for(int i=0;i<z-l;i++)
               cout<<"0";
             if(xx%dd!=0)
                cout<<xx%dd<<endl;
            else
                cout<<"\n";
            cout<<"Round Down"<<endl;
            flag=1;
        }
        f/=10;
        if(dd==1)
            break;
    }

    return 0;
}
