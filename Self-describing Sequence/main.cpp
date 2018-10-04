#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double n;
    while(cin>>n)
    {
        if(n==0)
            break;
        double fi=(1+sqrt(5))/2;
        double x=pow(fi,2-fi)*pow(n,fi-1);
        int i=(int)(x+.5);
        cout<<i<<endl;
    }
    return 0;
}
