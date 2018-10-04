#include <iostream>

using namespace std;

int main()
{
    long long a;cin >> a;
    long long x,y,y1=0,y2=0;
    for (long long i=0;i<a;i++)
    {
        cin>>x>>y;
        x>0?y1++:y2++;
    }
    (y1<=1||y2<=1)?cout<< "Yes" << endl:cout << "No" << endl;
    return 0;
}
