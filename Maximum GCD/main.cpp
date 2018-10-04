#include <bits/stdc++.h>

using namespace std;



int main()
{
    string s;
    int n,x,temp;
    vector<int> v;
    cin >> n;
    getchar();
    while(n--)
    {
        int max=0;

        getline(cin , s);
        istringstream in(s);
        v.clear();
        while(in >> x)
            v.push_back(x);
        for(int i=0;i<v.size()-1;i++)
        {
            for(int j=i+1;j<v.size();j++)
            {
                temp= __gcd(v[i],v[j]);
                if(temp>max)
                   max=temp;

            }
        }
        cout << max << endl;
    }


    return 0;
}
