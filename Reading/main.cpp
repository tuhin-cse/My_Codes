#include <bits/stdc++.h>

using namespace std;

int main()
{
    ofstream fout("output.txt");
    ifstream fin("input.txt");

    int n,k;
    fin >> n >> k;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        fin >> a[i];
        b[i]=a[i];
    }
    sort(a,a+n);
    int z=a[n-k];
    fout << z << endl;
    for(int i=0,j=0;i<n;i++)
        if(b[i]>=z)
        {
            fout << i+1 << " ";
            j++;
            if(j==k)
                break;
        }

    return 0;
}
