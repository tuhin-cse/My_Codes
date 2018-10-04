#include <bits/stdc++.h>

using namespace std;
bitset<10000001> prime;

int size;

void seive()
{
    size=2000+1;
    prime.set();
  //  prime[1]=0;

    for(int i=3;i<size;i+=2)
    {
        if(prime[i]==1)
        {
            for(int j=i*i;j<size;j+=(i*2))
                prime[j]=0;
        }

    }
}

void solve(string s)
{
    int sum =0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a'&&s[i]<='z')
            sum+=(s[i]+1-'a');
        else if(s[i]>='A'&&s[i]<='Z')
            sum+=(s[i]+27-'A');
    }
   // cout << sum << endl;
    if(sum%2==0 &&sum!=2)
    {
        cout << "It is not a prime word."<< endl;
        return;
    }
    if(!prime[sum])
    {
        cout << "It is not a prime word."<< endl;
        return;
    }
    cout << "It is a prime word." << endl;

}

int main()
{
    seive();
    string s;
    while(cin >> s)
    {
        solve(s);
    }
    return 0;
}
//It is a prime word.
//It is not a prime word.
