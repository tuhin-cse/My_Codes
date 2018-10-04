#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,m;
    cin >> n >> m;
    long long tempn=n,tempm=m,mn=0;
    while(tempn && tempm)
    {
       long long z=ceil((float)tempn/tempm);
       mn+=(((z*(z-1))/2)*(ceil((float)tempm/2)));
       tempn-=z*(ceil((float)tempm/2));
       tempm-=(ceil((float)tempm/2));
    }
    n-=m;
    cout << mn << " " << (n*(n+1))/2 << endl;
    return 0;
}
