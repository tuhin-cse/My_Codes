#include <iostream>

using namespace std;

int main()
{
    int a,b,n;
    cin >> a >> b >> c ;
    while(c--)
    {
        a=a+b;
        swap(a,b);
    }
    cout << b << endl;
    return 0;
}
