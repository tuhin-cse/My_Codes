#include <iostream>

using namespace std;

int disit_sum(int n)
{
    int sum=0;
    while(n)
    {
        sum+=(n%10);
        n/=10;
    }
    return sum;
}


int main()
{
    int n,big=0,div,temp;
    cin>> n;
    for(long long i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            temp=disit_sum(i);
            if(temp==big && i> div)
                div=i;
            if(temp > big)
            {
                big=temp;
                if(div<i)
                    div=i;
            }
            temp=disit_sum(n/i);
             if(temp==big && (n/i)> div)
                div=n/i;
            if(temp > big)
            {
                big=temp;
                div=n/i;
            }
        }
    }
    cout << div << endl;
}
