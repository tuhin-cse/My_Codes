/*
ID: tuhinab1
LANG: C++
TASK: gift1
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ofstream fout("gift1.out");
    ifstream fin("gift1.in");
    int t, i=0;
    while(fin>>t)
    {
        if(i!=0)
           fout<<"\n";
        i++;
        string s[t];
        int m[t]={0};
        for(int i=0;i<t;i++)
            fin>>s[i];
        string temp;
        int mm,l;
        for(int i=0;i<t;i++)
        {
            fin>>temp>>mm>>l;
            if(l==0)
                continue;
            int loss=mm/l;
            for(int j=0;j<t;j++)
            {
                if(temp==s[j])
                {
                    m[j]-=(loss*l);
                    break;
                }
            }
            for(int j=0;j<l;j++)
            {
                fin>>temp;
                for(int k=0;k<t;k++)
                    if(temp==s[k])
                         m[k]+=loss;
            }
        }
        for(int i=0;i<t;i++)
            fout<<s[i]<<" "<<m[i]<<endl;

    }
    return 0;
}
