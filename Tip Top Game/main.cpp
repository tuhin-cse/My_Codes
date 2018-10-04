#include <bits/stdc++.h>

using namespace std;



int main()
{
   int t,n,sn,c=0;
   cin >> t;
   while(t--)
   {
       cin >> n;
       sn=sqrt(n);

       sn*sn==n ? cout << "Case " << ++c << ": Yes" << endl : cout << "Case " << ++c << ": No" << endl;
   }
}
