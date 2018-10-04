#include <iostream>

using namespace std;

int main()
{
    int n;cin >> n;
    int c0=0,c5=0,x;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        x==5 ? c5++ : c0++;
    }
    c5/=9;
    string s="";
    for(int i=0;i<c5;i++)
        s+="555555555";
    for(int i=0;i<c0;i++)
        s+="0";
    if(c5>=1&&c0>=1)
       cout << s << endl;
    else if(c5==0&&c0>=1)
        cout << "0" << endl;
    else
        cout << "-1" << endl;
    return 0;
}
