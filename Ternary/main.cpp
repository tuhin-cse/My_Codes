#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a;
    while(cin >> a)
    {
        if(a<0)
            break;
        if(a==0)
        {
            cout << "0" << endl;continue;
        }

        string s="";
        int x=a;int c=0;
        while(a)
        {
            int z=a%3;c+=z;a/=3;
            if(z==1)
                s+="1";
            if(z==2)
                s+="2";
            if(z==0)
                s+="0";
        }
        reverse(s.begin(),s.end());
        cout << s << endl;
    }
    return 0;
}
