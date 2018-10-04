#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a,b,c;
    cin>>a >> b;
    c=b-1;
    c=a-c;
    (c%2==0 && c>=0 )? cout << "Yes" << endl : cout << "No" << endl;
    return 0;
}
