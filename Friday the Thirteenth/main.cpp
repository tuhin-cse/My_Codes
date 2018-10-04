/*
ID: tuhinab1
LANG: C++
TASK: friday
*/
#include <bits/stdc++.h>

using namespace std;

bool isleap(int n)
{
    if(n%400 == 0)
        return true;
    if(n%4==0 && n % 100 !=0)
        return true;
    return false;
}

int main()
{
    ofstream fout("friday.out");
    ifstream fin("friday.in");

    int n ,mo[]={31,31,28,31,30,31,30,31,31,30,31,30},a[7]={0},d=3;
    fin >> n ;
    for(int i=1900;i<1900+n;i++)
    {
        for(int j=0;j<12;j++)
        {
            d+=(mo[j]%7);
            d=d%7;
            if(j==2)
            {
                if(isleap(i))
                    d=(d+1)%7;
            }
            a[d]++;
        }
    }
    fout << a[6];
    for(int i=0;i<6;i++)
        fout << " " << a[i];
        fout << endl;
    return 0;
}
