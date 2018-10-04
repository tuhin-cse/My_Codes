#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;
    int c[10]={0};
    while(a)
    {
        int x=a%10;
        
        
        
        c[x]++;
        a=a/10;

    }
    if((c[4]+c[7]==4)||(c[4]+c[7]==7))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
