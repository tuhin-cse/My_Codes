#include <iostream>

using namespace std;

int power(int n,int c)
{
    int cc=0;
    while(n)
    {
        cc+=n/c;
        n=n/c;
    }
    return cc;
}

int main()
{
    int t,n,c=0,prime[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41,
                         43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    cin >> t ;
    while(t--)
    {
        cin >> n;
        cout << "Case " << ++c << ": " << n << " = 2 (" << power(n,2) << ")" ;
        for(int i=1;i<25 && prime[i] <= n;i++)
        {
            cout << " * " << prime[i] << " (" << power(n,prime[i]) << ")";
        }
        cout << endl;
    }
    return 0;
}
