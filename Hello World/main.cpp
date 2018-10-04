#include <iostream>

using namespace std;

int main()
{
    int a,c=0;
    while(cin>>a && a > 0)
    {
        int x=0,z=1;
        while(a>z)
        {
            z+=z;
            x++;
        }
        cout << "Case " << ++c << ": " << x << endl;
    }
}
