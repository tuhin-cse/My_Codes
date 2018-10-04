#include <iostream>

using namespace std;

int length(int n)
{
    int count=1;
    while(n!=1)
    {
        if(n&1)
            n=(3*n)+1;
        else
            n/=2;
        count++;
    }
    return count;
}

int main()
{
    int a,b,temp;
    while(cin >> a >> b )
    {
        cout << a << " " << b << " ";
        if(a>b)
            swap(a,b);
        int max=0;
        for(int i=a;i<=b;i++)
        {
            temp=length(i);
            if(temp>max)
                max=temp;
        }
        cout << max << endl;
    }
}

