#include <bits/stdc++.h>

using namespace std;

int main()
{

   long a[3];
   while((cin >> a[0] >> a[1] >> a[2]) && a[0]!=0)
   {
       sort(a,a+3);
       a[0]*a[0]+ a[1]*a[1]== a[2]*a[2] ? cout << "right" << endl :
                                      cout << "worng" << endl;
   }
}
