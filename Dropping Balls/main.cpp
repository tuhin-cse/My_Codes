#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,D,I,l;
    while(cin >> t)
    {
        if(t==-1)
            break;
        while(t--)
        {
            l=1;
            cin >> D >> I ;
            for(int i=1;i<=D;i++)
                l*=2;

            int zz=1;
            while(I>1)
            {
                I%2 == 1 ? zz*=2 : zz=(zz*2)+1;
                I=(I/2)+(I%2);
            }

            while(zz*2<l)
            {
                zz*=2;
            }
            cout << zz << endl;
        }
    }
    return 0;
}
