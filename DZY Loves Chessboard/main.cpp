#include <bits/stdc++.h>
#include <string.h>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m ;

    char a[n][m];

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin >> a[i][j];

    char z;
    for(int i=0;i<n;i++)
    {
        i % 2 == 0 ? z= 'B' : z = 'W' ;
        for(int j=0;j<m;j++)
        {
            if(a[i][j]=='.')
            {
                a[i][j]=z;
            }
            z=='B' ? z = 'W' : z = 'B' ;
        }

    }
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<m;j++)
        {
            cout << a[i][j];
        }
        cout << "\n" ;
     }

    return 0;
}
