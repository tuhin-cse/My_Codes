#include <iostream>

using namespace std;

int main()
{
    int n,m,c,tt=0,flag;
    while(cin>>n>>m>>c)
    {
        if(n==0||m==0||c==0)
             break;
        flag=0;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];

        int b[n]={0},x[m],max=0;
        for(int i=0;i<m;i++)
             cin>>x[i];

        for(int i=0;i<m;i++)
        {

            b[x[i]-1]++;
            b[x[i]-1]=b[x[i]-1]%2;
            int p=0;
            for(int j=0;j<n;j++)
            {
                p+=(a[j]*b[j]);
            }
            if(p>c)
            {
                cout<<"Sequence "<< ++tt<< "\nFuse was blown.\n"<<endl;
                flag=1;
                break;
            }
            if(p>max)
               max=p;

        }
        if(flag==1)
            continue;
        cout<<"Sequence "<< ++tt<< "\nFuse was not blown."<<endl;
        cout<<"Maximal power consumption was "<< max <<" amperes.\n"<<endl;
    }
    return 0;
}
