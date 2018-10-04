#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t,ca=0;
    cin>>t;

    while(t--)
    {
        int a,b,c,d=0,s=0;
        cin>>a>>b>>c;
        int x[a];
        for(int i=0;i<a;i++)
        {
            cin>>x[i];
        }
        for(int i=0;i<a;i++)
        {
           if(d+1<=b && s+x[i]<= c)
           {
               d++;s+=x[i];
           }
           else
            break;
        }

        cout<<"Case "<<++ca<<": "<<d<<endl;
    }

    return 0;
}
