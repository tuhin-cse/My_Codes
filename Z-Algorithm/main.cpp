#include <bits/stdc++.h>

using namespace std;

vector<int> z_algo(string s)
{
    int n=s.size();
    vector<int> z(n);
    z[0]=n;
    int L = 0, R = 0;
    for (int i = 1; i < n; i++)
    {
      if (i > R)
       {
        L = R = i;
        while (R < n && s[R-L] == s[R])
        {
            R++;
        }
        z[i] = R-L;
        R--;
      }
      else
      {
        int k = i-L;
        if (z[k] < R-i+1)
        {
            z[i] = z[k];
        }
        else
        {
            L = i;
            while (R < n && s[R-L] == s[R])
            {
                R++;
            }
            z[i] = R-L;
            R--;
        }
    }
    z[0]+=z[i];
  }
  return z;
}



int main()
{
    string s;
    cin >> s;
    vector<int> a=z_algo(s);
    for(int i=0;i<a.size();i++)
        cout << a[i] << " ";
    return 0;
}
