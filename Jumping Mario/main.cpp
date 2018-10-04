#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,c=0;
    cin>>t;
    while(t--)
    {
		int x,m=0,n;
        cin>>x;
        for(int i=0;i<x;i++)
        {
		    cin >> n;
			m=max(m,n);
	    }
        cout<<"Case "<< ++c <<": "<< m<<endl;

    }
    return 0;
}
