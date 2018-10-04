#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int max=0,maxline,x,y,cx=0,cmax=0;
    cin >> x ;
    int t=x;
    while(t--)
    {
        cin >> s >> y ;
        if(s=="set")
        {
            if(cmax>max)
            {
                max=cmax;
                maxline=cx;
            }
            cmax=y;
            maxline=1;
        }
        else if(s=="add")
        {
            if(cmax>max)
            {
                max=cmax;
                maxline=cx;
            }
            cmax+=y;
            cx++;
        }
    }
    cout << x-maxline << endl;
}
