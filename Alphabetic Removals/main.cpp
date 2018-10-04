#include <iostream>

using namespace std;

int main()
{
    int n ,k;
    string s,s1,s2;
    cin >> n >> k >> s;
    for(int i=0;i<k;)
    {
        for(char c='a';c<='z';c++)
        {
            for(int j=0;j<s.size();j++)
            {
                if(s[j]==c)
                {
                    i++;
                    s[j]='0';
                    j--;
                }

                if(i>=k)
                    break;
            }
            if(i>=k)
                    break;
        }
    }
    for(int i=0;i<s.size();i++)
        if(s[i]!='0')
           cout << s[i];
    cout << endl;
    return 0;
}
