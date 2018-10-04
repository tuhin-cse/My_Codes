#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,A,B,C,T,S=0,ss,x,un=1;
    cin >> n >> A >> B >> C >>T;
    ss=n*A;
    long long a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    //sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        x=a[i];
        if(i>0 && a[i-1]!=a[i])
            un ++ ;
        S+=(A-((T-x)*B));
        if(x<T)
        {
            S+=(C*un);
        }
    }
    ss > S ? cout << ss << endl : cout << S << endl;

}
