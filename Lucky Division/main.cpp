#include <bits/stdc++.h>

using namespace std;

vector<int> v;
void set_vector()
{
    v.push_back(4);
    v.push_back(7);
    v.push_back(44);
    v.push_back(47);
    v.push_back(74);
    v.push_back(77);
    v.push_back(444);
    v.push_back(447);
    v.push_back(474);
    v.push_back(477);
    v.push_back(744);
    v.push_back(747);
    v.push_back(774);
    v.push_back(777);

}

bool check(int n)
{
    for(int i=0;i<v.size();i++)
        if(n%v[i]==0)
          return true;
    return false;
}

int main()
{
    set_vector();
    int n;
    cin >> n ;
    check(n) ? cout << "YES" << endl : cout << "NO" << endl;
    return 0;
}
