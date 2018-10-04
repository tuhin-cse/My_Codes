#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s ;
    int c=0,c0=0;
    for(int i=0;i<s.size();i++)
    {
        s[i]=='-' ? c++ : c0++ ;
    }
    if((c0>0 && c%c0==0)||c0==0)
    {
       cout << "YES" << endl;
       return  0;
    }
    cout << "NO" << endl;
    return 0;
}
