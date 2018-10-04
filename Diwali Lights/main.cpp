#include <bits/stdc++.h>


using namespace std;

int main()
{
    long long t,n;
    cin >> t ;
    while (t--)
    {
        cin >> n ;
        long long a=2,result=1;
        while(n)
        {
            if(n%2==1)
                result=(result*a);
            result=result%100000;
            n/=2;
            a=a*a;
            a=a%100000;

        }
        result=result%100000;
        cout << result-1 << endl;
    }
    return 0;
}
