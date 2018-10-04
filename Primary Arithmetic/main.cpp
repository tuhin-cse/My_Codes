#include <iostream>

using namespace std;

int main()
{
    unsigned long a,b;
    while(cin>>a>>b)
    {
        if(a==0&&b==0)
            break;
        int c=0,cc=0;
        while(a||b)
        {
            int x=a%10;int y=b%10;
            int z=x+y+c;
            if(z>9)
            {
                c=1;
                cc++;
            }
            else
                c=0;
            a/=10;b/=10;
        }
        if(cc==0)
            cout<<"No carry operation."<<endl;
        else if(cc==1)
            cout<<"1 carry operation."<<endl;
        else
            cout<<cc<<" carry operations."<<endl;
    }
    return 0;
}
