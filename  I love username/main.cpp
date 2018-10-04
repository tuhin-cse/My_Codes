#include <iostream>

using namespace std;

int main()
{
    int a;cin >> a;
    int x[a];
    for(int i=0;i<a;i++)
        cin >> x[i];
    int b,w,c=0 ; b=w= x[0];
    for(int i=1;i<a;i++)
    {
        if(b<x[i])
        {
            b=x[i];
            c++;
        }
        if(w>x[i])
        {
            w=x[i];
            c++;
        }
    }
    cout << c << endl;
    return 0;
}
