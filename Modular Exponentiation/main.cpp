#include <iostream>

using namespace std;

int main()
{
    long long n,x;long long s=1;
    cin >>n >>x;
    for(long long i=0;i<n;i++)
        s*=2;
    cout << x%s << endl;
    return 0;
}
