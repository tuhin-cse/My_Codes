#include <iostream>

using namespace std;

int disit_sum(int d)
{
    int sum=0;
    while(d)
    {
        sum+=(d%10);
        d/=10;
    }
    return sum;
}

int main()
{
    int t,n,a;
    cin >> t;
    while(t--)
    {
        cin >> n;
        long long s=0;
        for(int i=0;i<n;i++)
        {
            cin >> a ;
            s+=disit_sum(a);
        }
        if(s%3==0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
