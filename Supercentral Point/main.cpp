#include <iostream>

using namespace std;

int main()
{
    int l;cin >> l;
    int x[l],y[l];
    for(int i=0;i<l;i++)
        cin >> x[i] >> y[i] ;

    int c=0;
    for(int i=0;i<l;i++)
    {
        int t[4]={0};
        for(int j=0;j<l;j++)
        {
            if(i==j)
                continue;
            if(x[i]<x[j]&&y[i]==y[j])
                t[0]=1;
            if(x[i]>x[j]&&y[i]==y[j])
                t[1]=1;
            if(x[i]==x[j]&&y[i]>y[j])
                t[2]=1;
            if(x[i]==x[j]&&y[i]<y[j])
                t[3]=1;
            if(t[0]==1&&t[1]==1&&t[2]==1&&t[3]==1)
                {
                    c++;
                    break;
                }

        }
    }
    cout << c << endl;

    return 0;
}
