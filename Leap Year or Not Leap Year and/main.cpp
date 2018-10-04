#include <iostream>

using namespace std;

int main()
{
    long m4,m100,m400,m15,m55;string y;int f=0;
    while(cin>>y)
    {
       if(f!=0)
        cout<<"\n";
       f++;
       m4=m100=m400=m15=m55=0;
       for(int i=0;i<y.size();i++)
       {
           m4=((m4*10)+(y[i]-'0'))%4;
           m100=((m100*10)+(y[i]-'0'))%100;
           m400=((m400*10)+(y[i]-'0'))%400;
           m15=((m15*10)+(y[i]-'0'))%15;
           m55=((m55*10)+(y[i]-'0'))%55;
       }

       int fl=0,leap=0;

        if((m400==0)||(m4==0&&m100!=0))
        {
            cout<<"This is leap year."<<endl;
            fl=1;
            leap=1;
        }
        if(m15==0)
        {
            cout<<"This is huluculu festival year."<<endl;
            fl=1;
        }
        if(m55==0&&leap==1)
        {
            cout<<"This is bulukulu festival year."<<endl;
            fl=1;
        }
        if(fl==0)
            cout<<"This is an ordinary year."<<endl;


    }
    return 0;
}

