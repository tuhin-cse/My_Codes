/*
ID: tuhinab1
LANG: C++
TASK: beads
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream fin("beads.in");
    ofstream fout("beads.out");

    int n,h=0,flag=0;
    string s;
    vector<char> v;

    fin >> n >> s ;
    s=s+s;
    for(int i=0;i<s.size();i++)
    {
        v.clear();
        stack<char> sk;
        v.push_back(s[i]);
        if(s[i]!='w')
            sk.push(s[i]);
        flag=0;
        if(i>0 && s[i]==s[i-1])
            continue;
        for(int j=i+1;j<s.size();j++)
        {
           if(s[j]!='w')
           {
               if(sk.empty())
                 sk.push(s[j]);
               if(sk.top()!=s[j])
                 sk.push(s[j]);
               if(sk.size()>2)
                break;
           }
           v.push_back(s[j]);
        }
        if(v.size()>h)
          h=v.size();
    }
    if(h>n)
        h=n;
    fout << h << endl;
    return 0;
}
