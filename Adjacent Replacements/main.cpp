#include <iostream>

using namespace std;

int main()
{
    int n,a;
    cin >> n ;
    for(int i=0;i<n;i++)
    {
        cin >> a;
        if(a&1)
            cout << a << " ";
        else
            cout << a-1 << " ";
    }
    return 0;
}
