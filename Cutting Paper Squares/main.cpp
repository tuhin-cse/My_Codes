
#include <bits/stdc++.h>

using namespace std;

long long solve(long long n, long long m){
    //if(n>m)
    //    swap(n,m);
    return (n-1)+n*(m-1);
}

int main() {
    long long n;
    long long m;
    cin >> n >> m;
    long long result = solve(n, m);
    cout << result << endl;
    return 0;
}
