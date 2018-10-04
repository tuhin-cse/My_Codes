#include <bits/stdc++.h>

using namespace std;

int main()
{
    ofstream fout("output.txt");
    ifstream fin("input.txt");

    int n,c=0;
    cin >> n;
    int tx=0,x;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        if(tx==0 && x!=0)
            tx=x;
        else
        {
           if((tx>x && tx!=0) || x==0 )
             c++;
           else
            tx=x;
        }
    }
    cout << c << endl;

    return 0;
}
