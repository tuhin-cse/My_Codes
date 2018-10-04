#include <bits/stdc++.h>

using namespace std;

string binary(int a)
{
    string s="";
    while(a)
    {
        s+=('0'+a%2);
        a/=2;
    }
    return s;
}

int deffer(int a,int b)
{
     string s1 = binary(a);
     string s2 = binary(b);
     int la=s1.size();
     int lb=s2.size();
     if(la>lb)
     {
         while(la>lb)
            s2+='0',lb++;
     }
     if(la<lb)
     {
         while(la<lb)
            s1+='0',la++;
     }
     int c=0;
     for(int i=0;i<la;i++)
     {
         if(s1[i]==s2[i])
            c++;
     }
     return lb-c;
}

int main()
{
   cout <<  deffer(1,8);
    int n,m,k,l,c=0;
    cin >> n >> m >> k;
    l=pow(2,n)-1;
    int a[m+1];
    for(int i=0;i<=m;i++)
        cin >> a[i];
    for(int i=0;i<m;i++)
    {
        if(deffer(a[i],a[m])<=k)
            c++;
    }
    cout << c << endl;
}
