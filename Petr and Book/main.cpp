#include <iostream>

using namespace std;

int main()
{
    int n,a[7];
    cin >> n;
    for(int i=0;i<7;i++)
        cin >> a[i];
    int i=1;
    while(true)
    {
        if(n<=0)
        {
            i--;
            if(i==0)
                i=7;
            cout << i << endl;
            return 0;
        }
        n-=a[i-1];
        i++;
        if(i==8)
            i=1;
    }
    return 0;
}
