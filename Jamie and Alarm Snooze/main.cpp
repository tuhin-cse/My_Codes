#include <iostream>
#include <string>

using namespace std;

int main()
{
    int x,h,m;
    cin >> x >>h >> m;
    for(int i=0; ;i++)
    {
        string s1=to_string(h);
        string s2=to_string(m);
        for(int j=0;j<s1.size();j++)
            if(s1[j]=='7')
             {
             cout << i << endl;
           //  cout <<s1 <<" " <<s2 << endl;
             return 0;
             }
        for(int j=0;j<s1.size();j++)
            if(s2[j]=='7')
             {
             cout << i << endl;
           //  cout <<s1 <<" " <<s2 << endl;
             return 0;
             }
        m-=x;
        if(m<=-1)
            {
                h--;
                m=60+m;
            }
        if(h==-1)
            h=23;
    }
    return 0;
}
