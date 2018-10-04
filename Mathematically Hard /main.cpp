#include <bits/stdc++.h>

using namespace std;
int phi[5000001];
void seive()
{
    int size= 5000001;
    for(int i=0;i<size;i++)
          phi[i]=i;
    for(int i=2;i<size;i++)
    {
        if(phi[i]==i)
        {
            for(int j=i;j<size;j+=i)
            {
                phi[j]/=i;
                phi[j]*=(i-1);
            }
        }
    }
}

string sum(string s,long long n)
{
    ostringstream in;
  //  cout << s << "  " << n << "   ";
    in << n;
    string ss = in.str();
    if(ss.size()>s.size())
        swap(ss,s);
    int z,c=0,i,j;
    for(i=s.size()-1,j=ss.size()-1;j>=0;i--,j--)
    {
        z=(int)s[i]+(int)ss[j]-2*(int)'0'+c;
        c=z/10;
        s[i]=(char)((int)'0'+z%10);
    }
    if(c!=0)
    {
        if(i<0)
        {
            s="0"+s;
            s[0]=(char)((int)'0'+c);
        }
        else
            s[i]=(char)((int)(s[i]-'0')+(int)'0'+c);
    }
   // cout << s << endl;
    return s;
}

int main()
{
    seive();
   // cout << sum("555",555);
    int t,a,b,c=0;
    cin >> t ;
    while(t--)
    {
        cin >> a >> b ;
        string s="0";
        for(int i=a;i<=b;i++)
        {
            s=sum(s,(long long)(phi[i]*phi[i]));
        }
        cout << "Case " << ++c << ": " << s << endl;
    }
    return 0;
}
