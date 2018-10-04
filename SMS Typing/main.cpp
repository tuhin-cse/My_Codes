#include <iostream>

using namespace std;

int main()
{
    int t,c=0; cin >> t;getchar();
    while(t--)
    {
        int a['{'] =  {0} ;
        a['a']=a['d']=a['g']=a['j']=a['m']=a['p']=a['t']=a['w']=1;
        a['b']=a['e']=a['h']=a['k']=a['n']=a['q']=a['u']=a['x']=2;
        a['c']=a['f']=a['i']=a['l']=a['o']=a['r']=a['v']=a['y']=3;
        a['s']=a['z']=4;a[' ']=1;
        string s;int ss=0;
        getline(cin,s);
        for(int i=0;i<s.size();i++)
        {
            ss+=a[s[i]];
        }
        cout<<"Case #" << ++c <<": " << ss << endl;
    }
    return 0;
}
