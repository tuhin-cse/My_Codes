#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int c=a+b;
        if(c%2!=0||a<b)
        {
            cout<<"impossible"<<endl;
            continue;
        }
         c=c/2;
         if((a-c)==(c-b))
         {
             cout<<c<<" "<<a-c<<endl;
             continue;
         }
         cout<<"impossible"<<endl;
    }
    return 0;
}
