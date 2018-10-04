/*
ID: tuhinab1
LANG: C++
TASK:palsquare
*/

#include <bits/stdc++.h>

using namespace std;
char symbol[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','k'};

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

int main()
{
    ifstream fin("palsquare.in");
    ofstream fout("palsquare.out");
    int b,n;
    string s;
    fin >> b ;
    for(int i=1;i<=300;i++)
    {
        n=i*i;
        string s = to_base(n,b);
        if(is_palindrome(s))
            fout << to_base(i,b) << " " << s << endl;
    }
    return 0;
}
