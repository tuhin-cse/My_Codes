/*
ID: tuhinab1
LANG: C++
TASK: transform
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream fin("transform.in");
    ofstream fout("transform.out");
    int n,ans[8]={1,1,1,1,1,1,1,1};
    fin >> n;
    string s[n],ss[n];
    for(int i=0;i<n;i++)
        fin >> s[i];

    for(int i=0;i<n;i++)
       fin >> ss[i];
    string temp;
    for(int i=0;i<n;i++)
    {
        temp="";
        for(int j=n-1;j>=0;j--)
        {
            temp+=s[j][i];
        }
        if(temp!=ss[i])
            ans[1]=0;
    //   fout << temp << endl;
     }
     for(int i=0;i<n;i++)
     {
        temp="";
        for(int j=0;j<n;j++)
        {
            temp+=s[n-1-i][n-1-j];
        }
        if(temp!=ss[i])
            ans[2]=0;
      // fout << temp << endl;
     }
     for(int i=0;i<n;i++)
     {
        temp="";
        for(int j=0;j<n;j++)
        {
            temp+=s[j][n-1-i];
        }
        if(temp!=ss[i])
            ans[3]=0;
      // fout << temp << endl;
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]!=ss[n-1-i])
            ans[4]=0;
         if(s[i]!=ss[i])
            ans[6]=6;
    }
    if(ans[4]==1)
    {
        if(ans[1]==1 || ans[2]==1 || ans[3]==1)
            fout << "5" << endl;
        else
            fout << "4" << endl;
    }
    else if(ans[1]==1 || ans[2]==1 || ans[3]==1)
    {
        if(ans[1]==1)
            fout << "1" << endl;
        else if(ans[2]==1)
            fout << "2" << endl;
        else if(ans[3]==1)
            fout << "3" << endl;
    }
    else if(ans[6]==1)
        fout << "6" << endl;
    else
        fout << "7" << endl;
    return 0;
}
