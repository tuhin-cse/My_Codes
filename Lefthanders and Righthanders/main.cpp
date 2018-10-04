#include <bits/stdc++.h>

using namespace std;

int main()
{
    ofstream fout("output.txt");
    ifstream fin("input.txt");
    string s;
    int n;
    fin >> n >> s;
    for(int i=0;i<n/2;i++)
    {
        if(s[i]=='R' && s[n/2+i]=='L')
           fout << n/2+i+1<< " " << i+1 << endl;
        else
          fout << i+1<< " " << n/2+i+1 << endl;
    }
    return 0;
}
