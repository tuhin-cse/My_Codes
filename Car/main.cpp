#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    double b,c,d;int a,cc=0;
    while(cin>>a)
    {
        if(a==0)
            return 0;
        cin>>b>>c>>d;
        double s,ss;

        if(a==1)
        {
            s=(c-b)/d;
            ss=(b*d)+(.5*s*d*d);
            cout<<"Case "<< ++cc << ": "<<fixed << setprecision(3)<<ss<<" "<<fixed << setprecision(3) << s << endl;
        }
        else if(a==2)
        {
            s=(c-b)/d;
            ss=(b*s)+(.5*d*s*s);
            cout<<"Case "<< ++cc << ": "<<fixed << setprecision(3)<<ss<<" "<<fixed << setprecision(3) << s << endl;
        }
        else if(a==3)
        {
            s=sqrt ((b*b)+2*c*d);
            ss= (s-b)/c;
            cout<<"Case "<< ++cc << ": "<<fixed << setprecision(3)<<s<<" "<<fixed << setprecision(3) << ss << endl;
        }
        else if(a==4)
        {
            s = sqrt((b*b) - 2*c*d);
            ss= (b-s)/c;
            cout<<"Case "<< ++cc << ": "<<fixed << setprecision(3)<<s<<" "<<fixed << setprecision(3) << ss << endl;
        }
    }
    return 0;
}
