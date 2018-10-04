#include <iostream>

using namespace std;

bool isp(string s,int i,int j)
{
    for( ;i<j/2;i++)
    {
        if(s[i]!=s[j-1-i])
            return false;
    }
    return true;
}

int main()
{
    string s ;
    cin >> s;
    if(!isp(s,0,s.size()))
    {
        cout << s.size() << endl;
        return 0;
    }

    for(int j=s.size();j>0;j--)
    {
        for(int i=0;i<(s.size()-j);i++)
        {

            if(!isp(s,i,i+j))
            {
                cout << j-i<< endl;
                return 0;
            }
       }
    }
    cout << "0" << endl;
    return 0;
}
