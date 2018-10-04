#include <iostream>

using namespace std;

int main()
{
    int y[12]={31,28,31,30,31,30,31,31,30,31,30,31};

    int l;cin>>l;
    int a[l],f=0;
    for(int i=0;i<l;i++)
    {
        cin>>a[i];
        if(a[i]==29)
            f++;
    }
    if(f==1)
        y[1]=29;
    if(f==2)
    {
        cout <<"NO"<<endl;
        return 0;
    }
    int c=0;
    for(int i=0; ;i++,c++)
    {
        if(c==36)
           {
           cout <<"NO"<<endl;
            return 0;
            }
        if(i==12)
            i=0;
        if(a[0]==y[i]||(a[0]==28&&y[i]==29))
        {
            int in=0;
            for(int j=0,k=i;j<l;j++,k++)
            {
                if(k==12)
                    k=0;
                if(a[j]==28&&y[k]==29)
                {
                       in++;
                    if(in==l)
                    {
                     cout<<"YES" <<endl;
                     return 0;
                     }
                     continue;
                }
                if(a[j]!=y[k])
                      break;
                in++;
                if(in==l)
                {
                    cout<<"YES" <<endl;
                    return 0;
                }
            }
        }
    }
    return 0;
}
