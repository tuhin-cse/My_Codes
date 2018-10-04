#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,c=0;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            for (int k=j;k<(i+j);k++)
            {
                if(i^j^k==0 )
                {
                c++;

                }

            }
        }
    }
    cout << c << endl;
    return 0;
}
