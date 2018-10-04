#include <iostream>

using namespace std;

int main()
{
    int t;cin >> t;
    while(t--)
    {
        int n,k; int max=0;
        cin >> n >> k ;
        int x[n],z[k];
        for (int i=0;i<n;i++)
             x[i]=1;
        for (int i=0;i<k;i++)
        {
            cin >> z[i];
            x[z[i]-1]=0;
        }
        for(int i=0;i<k;i++)
        {
            int temp=0;
            for(int j=z[i]-1,h=z[i]-1;h<n;j--,h++)
            {
                 if(j==-1)
                     j=0;
                temp++;
                if(temp>max)
                    max=temp;
                if(x[j-1]==0&&x[h+1]==0||(j==0&&x[h+1]==0))
                    break;
                x[h]=x[j]=0;
            }
        }
        cout << max << endl;

    }
    return 0;
}
