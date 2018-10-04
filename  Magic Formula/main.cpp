#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,f;
    while(cin>>a>>b>>c>>d>>f)
    {
        int cn=0,fn;
        if(d==0)
            break;
        for(int i=0;i<=f;i++)
        {
            fn=(a*i*i)+(b*i)+c;
            if(fn%d==0)
                   cn++;
        }
        cout << cn << endl;
    }
    return 0;
}
