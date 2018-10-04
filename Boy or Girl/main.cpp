#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a['{']={0};
    string s;
    getline(cin,s);

    sort(s.begin(),s.end());

    int sum = s.size();

    for(int i=0;i<s.size();i++)
        if(s[i]==s[i+1])
            sum--;

    sum % 2 == 0 ? cout << "CHAT WITH HER!" << endl: cout << "IGNORE HIM!" << endl;
    return 0;
}
