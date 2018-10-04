#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int l;
    cin >>l;
    int a[l];
    for(int i=0;i<l;i++)
        cin >> a[i];
    sort (a,a+l);
    int max = a[l-1];int c=0;
    for(int i=l-1;i>=0;i--)
    {
        if(max==a[i])
            c++;
        else
           break;
    }
    c%2==0 ? cout << "Agasa" << endl: cout << "Conan" << endl;

    return 0;
}
