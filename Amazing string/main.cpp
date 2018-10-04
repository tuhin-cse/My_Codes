#include <iostream>

using namespace std;

int main()
{
    int t,z,x;
    string s;
    cin >> t ;
    while(t--)
    {
        cin >> s ;
        x=1;
        int amizing = 0;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]==s[i-1])
                x++;
            else
            {
                amizing+=((x*(x+1))/2);
                x=1;
            }
        }
        amizing+=((x*(x+1))/2);
        cout << amizing << endl;
    }
    return 0;
}
