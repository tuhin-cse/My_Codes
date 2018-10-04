#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int c[3];
        cin>>c[0]>>c[1]>>c[2];
        sort(c,c+3);
        if(c[0]+c[1]>c[2])
            cout<<"OK"<<endl;
        else
            cout<<"Wrong!!"<<endl;
    }
    return 0;
}
