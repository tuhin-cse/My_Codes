#include <iostream>

using namespace std;

int main()
{

    string s;
    int f=0;
    while(getline(cin,s))
    {
        for(int i=0;i<s.size();i++)
        {
             if(s[i]=='"'&&f==0)
             {
                 s[i]='`';
                 s.insert(i+1,"`");
                 f=1;
                 continue;
             }
             if(s[i]=='"'&&f==1)
             {
                 s[i]='\'';
                 s.insert(i+1,"'");
                 f=0;
             }

        }
        cout<<s<<endl;
    }
    return 0;
}
