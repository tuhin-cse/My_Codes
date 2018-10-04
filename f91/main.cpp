#include <iostream>

using namespace std;

int main()
{
    int a,x;
    while(cin >> a && a!=0)
    {
        a>100 ? x=a-10 : x=91 ;
        cout<< "f91(" << a <<") = " << x << endl;
    }
    return 0;
}
