#include <iostream>

using namespace std;

int main()
{
    int y;
    cin>>y;
    while(true)
    {
        y++;
        int a,b,c;
        a=y/10;
        b=a/10;
        c=b/10;
        int x[10]={0};
        x[y%10]++;
        x[a%10]++;
        x[b%10]++;
        x[c%10]++;
        int flag=0;
        for(int i=0;i<10;i++)
            if(x[i]>1)
              flag=1;
        if(flag==0)
        {
            cout<<y<<endl;
            return 0;
        }

    }
    return 0;
}
