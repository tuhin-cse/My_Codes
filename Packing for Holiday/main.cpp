#include <iostream>

using namespace std;

int main()
{
    int t;cin>>t;int c=0;

    while(t--)
    {
        int l,w,h;cin>>l>>w>>h;

        if(l<=20&&w<=20&&h<=20)
            cout << "Case "<< ++c <<": good"<<endl;
        else
           cout << "Case "<< ++c <<": bad"<<endl;
    }
    return 0;
}
