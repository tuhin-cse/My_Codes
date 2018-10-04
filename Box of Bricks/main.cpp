#include <iostream>

using namespace std;

int main()
{
    int l,c=0;
    while(cin>>l)
    {
        if(l==0)
            break;
        int a[l],s=0;
        int z=0;
        for(int i=0;i<l;i++)
        {
            cin>>a[i];
            z+=a[i];
        }
        z=z/l;
        for(int i=0;i<l;i++)
        {
            if(a[i]>z)
            {
                s+=a[i]-z;
            }
        }
        if(c!=0)
            cout<<"\n";
        cout<<"Set #"<<++c<<endl;
        cout<<"The minimum number of moves is "<<s<<"."<<endl;
    }
    return 0;
}
