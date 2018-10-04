#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1,s2;
    cin >> s1 >> s2;
    string ss=s1;
    reverse(ss.begin(),ss.end());
    s2==ss? cout << "YES" << endl : cout << "NO" << endl;
    return 0;
}
