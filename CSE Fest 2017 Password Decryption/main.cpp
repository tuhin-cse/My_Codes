#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int dd,y=0,m=0;
    cin>>dd;
    int fd[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    for(int i=0; ;i++)
    {
        if(i==12)
            i=1;
        if(dd>=fd[i])
        {
            dd-=fd[i];
            m++;
            if(m==12)
            {
                m=0;
                y++;
            }
        }
        else
        {
            cout<<y<<" year "<<m<<" month "<<dd<<" day"<<endl;
            return 0;
        }

    }
    return 0;
}
