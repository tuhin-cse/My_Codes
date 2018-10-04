#include <iostream>

using namespace std;

int main()
{
     int n ,k,c=0;
     cin >> n >> k ;
     int a[n];
     for(int i=0;i<n;i++)
       cin >> a[i];
     for(int i=0;a[i]<=k;i++)
         c++;
     for(int i=0;a[n-1-i]<=k;i++)
         c++;
     if(c>n)
        c=n;
     cout << c << endl;
    return 0;
}
