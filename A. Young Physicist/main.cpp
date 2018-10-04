#include <iostream>

using namespace std;

int main()
{
    int c;
    cin>>c;
    int x,y,z,tx=0,ty=0,tz=0;
    while(c--)
    {
        cin>>x>>y>>z;
        tx+=x;
        ty+=y;
        tz+=z;
    }
    if(tz==0&&ty==0&&tx==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
