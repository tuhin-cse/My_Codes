#include <iostream>

using namespace std;

int main()
{
    string a,s="";
    cin >> a;
    for(int i=0;i<a.size();i++)
    {
        if((i<a.size()-2)&& a[i]=='W' && a[i+1]=='U' && a[i+2]=='B')
        {
            i+=2;
            if(s!=""&&s[s.size()-1]!=' ')
                s+=" ";
        }
        else
            s+=a[i];
    }
    cout << s << endl;

}
