#include <iostream>

using namespace std;

int main()
{
    int n,b,s,cb=0,s=0;
    cin >> n >> b >> s ;
    int a[n];
    for(int i=0;i<n;i++)
        cin  >> a[i];
    for(int i=0;i<n;i++)
    {
        if((a[i]==2)&&a[n-1-i]==1)||(a[i]==1)&&a[n-1-i]==2))
              {
                  s+=b;
                  a[i]==1 ? a[n-1-i]=1 : a[i]=1;
                  cb=1;
                  break;
              }
        if(n%2==0 && a[n/2]==2)
            {
                s+=100;
                a[n/2]=1;
                cb=1;
                break;
            }
    }
    if(cb==1)
    {
        for(int i=0;i<n/2;i++)
        {
            if(a[i]==2)
            {
                a[i]=a[n-1-i];
            }


        }
         for(int i=0;i<n/2;i++)
        {
            if(a[i]!=a[n-1-i])
            {
                cout << "-1" << endl;
                return 0;
            }
        }
    }

    return 0;
}
