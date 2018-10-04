#include <iostream>

using namespace std;

int main()
{
    int a[6],temp,x,y;
    for(int i=0;i<6;i++)
          cin>>a[i];
    for(int i=0;i<6;i++)
    {
        for(int j=1;j<6;j++)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            x=a[0]+a[1]+a[2];
            y=a[3]+a[4]+a[5];
            if(x==y)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
