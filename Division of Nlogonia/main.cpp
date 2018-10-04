#include <iostream>

using namespace std;

int main()
{
    int t;
    while(cin>>t)
    {
        if(t==0)
            break;
        int m,n,x,y;
        cin>>m>>n;
        while(t--)
        {
            cin>>x>>y;
            if(x==m||y==n)
                cout<<"divisa"<<endl;
            else if(x>m)
            {
                if(y>n)
                  cout<<"NE"<<endl;
                else
                  cout<<"SE"<<endl;
            }
            else
            {
                if(y>n)
                  cout<<"NO"<<endl;
                else
                  cout<<"SO"<<endl;
            }
        }

    }
    return 0;
}
