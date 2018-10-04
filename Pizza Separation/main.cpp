#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    if(n==1)
    {
        cout<<a[0]<<endl;
        return 0;
    }
    int min=360;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;

            for(int k=0;k<n;k++)
            {
                int s1=0,s2=0;
                for(int l=0;l<=k;l++)
                    s1+=a[l];
                for(int m=k+1;m<n;m++)
                    s2+=a[m];
                int x=s1-s2;
                if(x<0)
                    x*=(-1);
                if(x<min)
                    min=x;
            }
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    cout<<min<<endl;

    return 0;
}
