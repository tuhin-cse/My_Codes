#include <bits/stdc++.h>

using namespace std;

int main()
{
    double l,s1,s2,t;
    cin >> l >> s1 >> s2;
    if(s1>s2)
        swap(s1,s2);
    int Q;
    cin >> Q;
    double q;
    for(int i=0;i<Q;i++)
    {
        cin >> q;
        q=sqrt(q);
        double cos45 = 1/pow(2,.5);
        t=(l/cos45-q/cos45)/(s2-s1);
        cout << fixed << setprecision(4) << t << endl;
    }

}
