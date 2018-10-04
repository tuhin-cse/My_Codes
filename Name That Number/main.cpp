/*
ID: tuhinab1
LANG: C++
TASK: namenum
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
     ifstream name("dict.txt");
     ifstream fin("namenum.in");
     ofstream fout("namenum.out");
     map<char,char> m;
     m['A']=m['B']=m['C']='2';
     m['D']=m['E']=m['F']='3';
     m['G']=m['H']=m['I']='4';
     m['J']=m['K']=m['L']='5';
     m['M']=m['N']=m['O']='6';
     m['P']=m['Q']=m['R']=m['S']='7';
     m['T']=m['U']=m['V']='8';
     m['W']=m['X']=m['Y']=m['Z']='9';
     string s ,c,temp;
     int flag=0;
     fin >> c;
     while(name >> s)
        {
          temp="";
          for(int i=0;i<s.size();i++)
          {
              temp+=m[s[i]];
          }
          if(temp==c)
          {
             fout << s << endl;
             flag=1;
          }

        }
     if(flag==0)
        fout << "NONE" << endl;
    return 0;
}
