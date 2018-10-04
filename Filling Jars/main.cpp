#include <iostream>

using namespace std;

int main()
{
    long long n,m,a,b,c;
    cin  >> n >> m ;
    long long sum=0;
    for(int i=0;i<m;i++)
    {
        cin >> a >> b >> c ;
        sum +=(b-a+1)*c;
    }
    cout << sum/n << endl;
    return 0;
}
