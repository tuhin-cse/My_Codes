/*
ID: tuhinab1
LANG: C++
TASK: ride
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ofstream fout("ride.out");
    ifstream fin("ride.in");

    string s1,s2;
    fin >> s1 >> s2;
    int n1=1,n2=1;
    for(int i=0;i<s1.size();i++)
    {
        n1=(n1*((int)(s1[i]-'A')+1))%47;
    }
    for(int i=0;i<s2.size();i++)
    {
        n2=(n2*((int)(s2[i]-'A')+1))%47;
    }
  //  cout << n1 <<  " " << n2 << endl;
    n1==n2 ? fout << "GO" << endl : fout << "STAY" << endl;
    return 0;
}
