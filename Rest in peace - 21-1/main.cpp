#include <iostream>

using namespace std;
void tuhin(int n)
{
    int z;
    if(n%21==0)
    {
        cout << "The streak is broken!" << endl;
        return;
    }
    while(n)
    {
        z=n%100;
        if(z==21)
        {
        cout << "The streak is broken!" << endl;
        return;
        }
        n/=10;
    }
    cout << "The streak lives still in our heart!" << endl;
}

int main()
{
    int n,t;
    cin >> t ;
    while(t-- && cin >> n)
        tuhin(n);
    return 0;
}
