#include <bits/stdc++.h>

using namespace std;

vector<int> prefix_function (string Z)
{
    int n = (int) Z.length();
    vector<int> F (n);
    F[0]=0;
    for (int i=1; i<n; ++i) {
        int j = F[i-1];
        while (j > 0 && Z[i] != Z[j])

            j = F[j-1];

        if (Z[i] == Z[j])  ++j;

        F[i] = j;

    }

    return F;

}

int main()
{
    string s;
    cin >> s ;
    vector<int> a=prefix_function(s);
    for(int i=0;i<a.size();i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
