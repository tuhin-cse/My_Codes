#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a ;
    if (a%2==0 && a>0)
    {
        for(int i=1;i<a-1;i+=2)
            cout << i+1 << " " << i << " " ;
        cout << a << " " << a-1 << endl;
        return 0;
    }
    cout << "-1" << endl;
    return 0;
}
