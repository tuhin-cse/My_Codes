#include <bits/stdc++.h>

using namespace std;
int c;
void solve(vector<int> v)
{
    bool done = false;
    while(!done)
    {
        done=true;
        for(int i=0;i<v.size()-2;i++)
        {
            if(v[i]>v[i+2])
            {
              swap(v[i],v[i+2]);
              done=false;
            }
        }
    }
    for(int i=0;i<v.size()-1;i++)
        if(v[i]>v[i+1])
         {
            cout << "Case #" << ++c << ": " << i << endl;
            return;
         }
    cout << "Case #" << ++c << ": OK" << endl;
}

int main()
{
    vector<int> v;
    c=0;
    int t,n,x;
    cin >> t;
    while(t--)
    {
        v.clear();
        cin >> n;
        for(int i=0;i<n;i++)
        {
            cin >> x;
            v.push_back(x);
        }
        solve(v);
    }

    return 0;
}
