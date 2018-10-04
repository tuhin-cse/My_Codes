#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    char a[n][m];
    for(int i=0;i<n;i++)
        scanf("%s",a[i]);
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<m;j++)
       {
           if((a[i][j]>='0'&&a[i][j]<='9') || a[i][j]=='.' )
           {
               int z = (int)(a[i][j]-'0'),c=0;
               if(a[i][j]=='.')
                z=0;
               if((i-1)>=0)
               {
                  if(a[i-1][j]=='*')
                    c++;
                  if(j+1<m&&a[i-1][j+1]=='*')
                    c++;
               }
               if(j+1<m)
               {
                 if(a[i][j+1]=='*')
                    c++;
                 if(i+1<n&&a[i+1][j+1]=='*')
                   c++;

               }
               if(i+1<n)
                {
                  if(a[i+1][j]=='*')
                     c++;
                  if(j-1>=0&& a[i+1][j-1]=='*')
                     c++;

                }
                if(j-1>=0)
                {
                  if(a[i][j-1]=='*')
                   c++;
                  if(i-1>=0&&a[i-1][j-1]=='*')
                     c++;
                }
                if(z!=c)
                {
                    cout << "NO" << endl;
                    return 0;
                }
           }
       }
    }
    cout << "YES" << endl;
    return 0;
}
