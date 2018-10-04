#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int a;
    while(cin >> a)
    {
        if(a==0)
            break;
        string s="";
        int x=a;int c=0;
        while(a)
        {
            int z=a%2;c+=z;a/=2;
            (z==1)?(s+="1"):(s+="0");
        }
        reverse(s.begin(),s.end());
        cout<<"The parity of "<< s <<" is " << c <<" (mod 2)." << endl;

    }
    return 0;
}
