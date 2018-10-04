#include <iostream>

using namespace std;

int main()
{
    int n,a,b;
    cin >> n >> a >> b ;
    int x[n+1]={0};
    for(int i=0;i<=n;i++)
    {
        if(i>a&&i>=n-b)
            x[i]=1;
    }
    int sum =0;
    for(int i=1;i<=n;i++)
        sum += x[i];
    cout << sum << endl;
    return 0;
}
