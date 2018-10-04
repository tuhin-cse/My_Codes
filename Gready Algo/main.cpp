#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b;
    cin >> n;
    string s[n];
    vector<pair<int,int>> r;
    vector<pair<int,int>> tr;
    for(int i=0;i<n;i++)
    {
        cin >> s[i] >> a >> b;
        r.push_back(make_pair(a,b));
        tr.push_back(make_pair(a,b));
    }
    sort(r.begin(),r.end());
    vector<pair<int,int>> re;
    int i;
    int last=0;
    re.push_back(r[0]);
    for( i=1;i<n-1;i++)
    {
        if(r[i].first>r[i-1].second)
        {
            re.push_back(r[i]);
            last = r[i].second;
        }
    }
    for(int i=0;i<re.size();i++)
        cout << re[i].first << " " << re[i].second << endl;
    return 0;
}
