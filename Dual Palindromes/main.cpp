/*
ID: tuhinab1
LANG: C++
TASK: dualpal
*/

#include <bits/stdc++.h>

using namespace std;
char symbol[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','k'};
ofstream fout("dualpal.out");
string to_base(int n,int b)
{
    string res="";
    int z;
    while(n)
    {
        z=n%b;
        n/=b;
        res+=symbol[z];
    }
    if(res=="")
        res=symbol[0];
    reverse(res.begin(),res.end());
    return res;
}
bool is_palindrome(string s)
{
    string ss = s;
    reverse(ss.begin(),ss.end());
    if(ss==s)
        return true;
    return false;
}
int solve(int n)
{
    int c=0;
    for(int i=2;i<=10;i++)
    {
        if(is_palindrome(to_base(n,i)))
            c++;
        if(c>=2)
        {
            fout << n << endl;
            return 1;
        }
    }
    return 0;
}

int main()
{
    ifstream fin("dualpal.in");
    int n,m;
    fin >> n >> m ;
    for(int i=0,j=m+1;i<n;j++)
           i+=solve(j);
    return 0;
}
