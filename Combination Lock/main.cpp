#include <iostream>

using namespace std;

int main()
{
    int s,c1,c2,c3;
    while(cin>>s>>c1>>c2>>c3)
    {
        if(s==0&&c1==0&&c2==0&&c3==0)
            break;
        int d=1080;
        int z;

       if(c1>s)
        d+=(s*9 + (40-c1)*9);
       else if(c1<s)
        d+=((s-c1)*9);

       if(c2>c1)
        d+=((c2-c1)*9);
       else if(c2<c1)
        d+=((40-c1)*9+c2*9);

       if(c3>c2)
        d+=(c2*9 + (40-c3)*9);
       else if(c3<c2)
        d+=((c2-c3)*9);

        cout<<d<<endl;

    }
    return 0;
}
