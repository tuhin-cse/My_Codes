#include <iostream>

using namespace std;

int main()
{
    int n,m=0;
    while(cin>>n && n!=0)
    {
        int x=0,y=0;
        for(int i=0;i<n;i++)
        {
            int t;cin >> t;
            t==0?y++:x++;
        }
        cout << "Case " << ++m << ": " << x-y << endl;
    }
    return 0;
}
