#include <iostream>

using namespace std;

int main()
{
    int s,n,flag=0;
    cin >> s >> n;
    int x[n],y[n];
    for(int i=0;i<n;i++)
    {
        cin >> x[i] >> y[i];
    }
    while(true)
    {
        int t=0;
        for(int i=0;i<n;i++)
        {
            if(x[i]<=s && x[i]!=-1)
            {
                t=1;flag++;
                if(y[i]==0)
                    s-=x[i];
                s+=y[i];x[i]=-1;
            }
        }
        if(t==0)
        {
            cout << "NO" << endl;
            return 0;
        }
        if(flag==n)
            break;
    }
    cout << "YES" << endl;

}
