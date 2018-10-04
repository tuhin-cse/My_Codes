#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        int x[2]={0};
        x[a]++;x[b]++;x[c]++;

        if(x[0]==1)
        {
            if(a==0)
                cout<<"A"<<endl;
            else if(b==0)
                cout<<"B"<<endl;
            else
                cout<<"C"<<endl;
        }
        else if(x[1]==1)
        {
            if(a==1)
                cout<<"A"<<endl;
            else if(b==1)
                cout<<"B"<<endl;
            else
                cout<<"C"<<endl;
        }
        else
          cout<<"*"<<endl;
    }
    return 0;
}
