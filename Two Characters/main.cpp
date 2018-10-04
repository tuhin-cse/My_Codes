#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

// Complete the alternate function below.
int alternate(string s) {
      int a[26]={0},m=0;
     string ss="",temp;
     for(int i=0;i<s.size();i++)
           if(a[s[i]-'a']==0)
           {
               a[s[i]-'a']=1;
               ss+=s[i];
           }
    for(int i=0;i<ss.size()-1;i++)
    {
        temp="";
        for(int j=i+1;j<ss.size();j++)
        {
            for(int k=0;k<s.size();k++)
            {
                if(s[k]==ss[i] || s[k]==ss[j])
                {
                    temp+=s[k];
                }
                if(k>0 && temp[temp.size()-1]==temp[temp.size()-2])
                   {
                       temp.pop_back();
                       break;
                   }
            }
            m=max(m,(int)temp.size());
        }
    }
    return m;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string l_temp;
    getline(cin, l_temp);

    int l = stoi(ltrim(rtrim(l_temp)));

    string s;
    getline(cin, s);

    int result = alternate(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
