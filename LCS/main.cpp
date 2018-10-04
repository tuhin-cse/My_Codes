#include <bits/stdc++.h>

using namespace std;

string lcs(string s1,string s2)
{
    int a[s1.size()+1][s2.size()+1]={0};
    for(int i=0;i<=s1.size();i++)
         a[i][0]=0;
    for(int i=0;i<=s2.size();i++)
         a[0][i]=0;
    for(int i=1;i<=s1.size();i++)
    {
        for(int j=1;j<=s2.size();j++)
        {
            if(s1[i-1]==s2[j-1])
                a[i][j]=a[i-1][j-1]+1;
            else
                a[i][j]=max(a[i-1][j],a[i][j-1]);
        }
    }

    string s="";
   for (int i=s1.size(),j=s2.size();i>=0&&j>=0;)
   {
       if(s1[i-1]==s2[j-1] && a[i][j]==a[i-1][j-1]+1)
         {
             s+=s1[i-1];
             i--,j--;
         }
       else
           a[i][j-1]>a[i-1][j] ? j-- : i--;

   }
   reverse(s.begin(),s.end());
   return s;
}

int main()
{
    string s1,s2;
    cin >> s1 >> s2;
    string s=lcs(s1,s2);
    cout << s.size() << "\n" << s << endl;
    return 0;
}
