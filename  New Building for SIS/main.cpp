#include <bits/stdc++.h>

using namespace std;

int main()
{
    long n,h,a,b,q,x1,x2,y1,y2,r;
    cin >> n >> h >> a >> b >> q ;
    while(q--)
    {
        r=0;
        cin >> x1 >> y1 >> x2 >> y2 ;
        r+=abs(x1-x2);
        if(y1>b && y2 > b)
            r+=((y1-b)+(y2-b));
       else if(y1<a && y2 <a)
            r+=((a-y1)+(a-y2));
       else
            r+=min((abs(a-y1)+abs(a-y2)),(abs(b-y1)+abs(b-y2)));
        cout << r << endl;
    }
    return 0;
}
