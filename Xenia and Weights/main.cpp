#include <iostream>

using namespace std;

int main()
{
    string s;int n,a[11]=0;
    cin >> s >> n;
    for(int i=0;s.size();i++)
        if(s[i]=='1')
           a[i+1]=i+1;

    return 0;
}
