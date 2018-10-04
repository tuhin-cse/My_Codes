#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	long long int a[9];
    while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6]>>a[7]>>a[8])
    {
        int low = 999999999,x;
        char c[4];
        x=a[3]+a[6]+a[2]+a[8]+a[1]+a[4];
        if(low>x)
        {
            low = x;
            c[0]='B';
            c[1]='C';
            c[2]='G';
        }
        x=a[3]+a[6]+a[1]+a[7]+a[2]+a[5];
        if(low>x)
        {
            low = x;
            c[0]='B';
            c[1]='G';
            c[2]='C';
        }
        x=a[5]+a[8]+a[0]+a[6]+a[1]+a[4];
        if(low>x)
        {
            low = x;
            c[0]='C';
            c[1]='B';
            c[2]='G';
        }
        x=a[5]+a[8]+a[1]+a[7]+a[0]+a[3];
        if(low>x)
        {
            low = x;
            c[0]='C';
            c[1]='G';
            c[2]='B';
        }
        x=a[4]+a[7]+a[0]+a[6]+a[2]+a[5];
        if(low>x)
        {
            low = x;
            c[0]='G';
            c[1]='B';
            c[2]='C';
        }
        x=a[4]+a[7]+a[2]+a[8]+a[0]+a[3];
        if(low>x)
        {
            low = x;
            c[0]='G';
            c[1]='C';
            c[2]='B';
        }

        c[3]='\0';
        cout<<c<<" "<<low<<endl;
    }
	return 0;
}
