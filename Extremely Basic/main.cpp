#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a,b,d,e;
    float c,f;
    cin>>a>>b>>c>>d>>e>>f;

    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<(b*c)+(e*f)<<endl;
    return 0;
}
