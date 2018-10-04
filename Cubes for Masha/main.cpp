#include <iostream>

using namespace std;

int main()
{
    int t,c;
    cin>>t;
    int a[10]={0};
    for(int i=0;i<t;i++)
        for(int j=0;j<6;j++)
        {
         cin>>c;
         a[c]++;
        }

    for(int i=0; ;i++)
    {
        int b[10]={0};
        int xy=i;
        while(xy)
        {
           int z=xy%10;
           b[z]++;
           xy=xy/10;
        }
        for(int j=0;j<10;j++)
        {
            if(a[j]<b[j])
            {
                int x=i-1;
                cout<<x<<endl;
                return 0;
            }
        }
    }
    return 0;
}
