#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int l,flag,x;
    cin>>l;
    int a[l];
    for(int i=0;i<l;i++)
    {
         cin>>a[i];
    }
    for(int i=0;i<l;i++)
    {
        flag = 0;
        for(int j=i+1;j<l;j++)
        {
            if(a[i]==a[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<a[i]<<endl;
            return 0;
        }
    }
    return 0;
}
