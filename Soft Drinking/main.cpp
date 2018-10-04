#include <iostream>

using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np ;
    cin>> n>> k>> l>> c>> d>> p>> nl>> np;
    c*=d;
    int min = c;
    l*=k;
    l/=nl;
    if(min > l)
        min = l;
    p/=np;
    if(min > p)
        min = p;

    cout << min/n << endl;
    return 0;
}
