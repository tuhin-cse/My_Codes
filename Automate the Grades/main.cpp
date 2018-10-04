#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t,i=0;
    cin>>t;
    while(t--)
    {
        int t1,t2,f,a,c[3];
        cin>>t1>>t2>>f>>a>>c[0]>>c[1]>>c[2];

       sort(c,c+3);
        int cd=(c[2]+c[1])/2;
        cd+=(c[2]+c[1])%2;

        int r=t1+t2+f+a+cd;

        if(r>=90)
            cout<<"Case "<<++i<<": A"<<endl;
        else if(r>=80)
            cout<<"Case "<<++i<<": B"<<endl;
        else if(r>=70)
            cout<<"Case "<<++i<<": C"<<endl;
        else if(r>=60)
            cout<<"Case "<<++i<<": D"<<endl;
        else
            cout<<"Case "<<++i<<": F"<<endl;
    }
    return 0;
}
