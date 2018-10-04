#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;

        int c=0;
        sort(s.begin(),s.end());
        c=((int)(s[0]-'a')+1);
        for(int i=1,j=1;i<k ;j++ )
        {
            if(j>=n)
            {
                cout << "-1" << endl;
                return 0;
            }
            if(s[i]>s[i]+1)
            {
                 c+=((int)(s[i]-'a')+1);
                 i++;
            }

        }
        cout << c << endl;

    return 0;
}
