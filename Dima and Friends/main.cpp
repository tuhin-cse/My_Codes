#include <iostream>

using namespace std;

int main()
{
    int l,t,s=0;
    cin >> l;
    for (int i=0;i<l;i++)
    {
            cin >> t ;
            s+=t;
    }
    l++;
    while(s>=l)
        s-=l;
    int c=0;
    for(int i=1;i<=5;i++)
    {
       s++;
       if(s!=1)
         c++;
       if(s>=l)
         s-=l;
    }
    cout << c << endl;
    return 0;
}
