#include <iostream>

using namespace std;

int main()
{
    int l;
    cin >> l;
    int a[l];
    for(int i=0;i<l;i++)
    {
        cin >> a[i];
    }
    int x,y,t;
    cin >> t;
    while(t--)
    {
        cin >> x >> y ;
        if(a[x-1]%2==0)
        {
          cout << "Even" << endl;
        }
        else
            cout << "Odd" << endl;

    }
}
