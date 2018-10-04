#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b[10]={0},x,temp;
        cin>>a;
        for(int i=1;i<=a;i++)
        {
            temp=i;
            while(temp)
            {
                x=temp%10;
                b[x]++;
                temp/=10;
            }
        }
        for(int i=0;i<9;i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<b[9]<<endl;
    }
    return 0;
}
