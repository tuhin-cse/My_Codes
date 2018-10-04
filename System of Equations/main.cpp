#include <iostream>

using namespace std;

int main()
{
    int a,b,m,c=0;
    cin >> a >> b;
    m=a;
    if(b<m)
        m=b;
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i*i+j==b&&i+j*j==a)
                c++;
        }
    }
    cout << c << endl;
    return 0;
}
