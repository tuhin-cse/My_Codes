#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long t,i=0;
    cin>>t;
    while(t--)
    {
        long long a[3];
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        if(a[0]<=0||a[1]<=0||a[1]<=0)
            cout<<"Case "<< ++i <<": Invalid"<<endl;
        else if(a[0]+a[1]<=a[2])
            cout<<"Case "<< ++i <<": Invalid"<<endl;
        else if(a[0]==a[1]&&a[0]==a[2])
           cout<<"Case "<< ++i <<": Equilateral"<<endl;
        else if(a[0]==a[1]||a[0]==a[2]||a[1]==a[2])
           cout<<"Case "<< ++i <<": Isosceles"<<endl;
        else
            cout<<"Case "<< ++i <<": Scalene"<<endl;
    }
    return 0;
}
