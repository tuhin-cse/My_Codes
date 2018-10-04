#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double cv,s=0,v[260]={0};
        int l;
        char c;
        cin>>l;
        for(int i=0;i<l;i++)
        {
            cin>>c>>cv;
            v[c+128]=cv;
        }
        cin>>l;
        cin.ignore();
        char a[100000];
        for(int i=0;i<l;i++)
        {
            fgets(a,100000,stdin);
            for(int j=0;a[j]!='\0';j++)
            {
                char x=a[j];
                int vv=v[x+128];
                  s+=vv;
            }
        }
        double m =(double)s/100;
        printf("%.2f$\n",m) ;

    }
    return 0;
}
