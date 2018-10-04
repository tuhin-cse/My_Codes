#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string s1,s2;
    while(getline(cin,s1))
    {
        getline(cin,s2);
        int sr1,sr2;sr1=sr2=0;
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]>='A'&&s1[i]<='Z')
                sr1+=(int)s1[i]-64;
            if(s1[i]>='a'&&s1[i]<='z')
                sr1+=(int)s1[i]-96;

        }
        for(int i=0;i<s2.size();i++)
        {
            if(s2[i]>='A'&&s2[i]<='Z')
                sr2+=(int)s2[i]-64;
            if(s2[i]>='a'&&s2[i]<='z')
                sr2+=(int)s2[i]-96;

        }
        while(sr1>9)
        {
            int s=0;
            while(sr1)
            {
                int x=sr1%10;sr1/=10;s+=x;
            } sr1=s;
        }
        while(sr2>9)
        {
            int s=0;
            while(sr2)
            {
                int x=sr2%10;sr2/=10;s+=x;
            } sr2=s;
        }
        double r = (sr2>sr1) ? ((double)sr1/sr2) : ((double)sr2/sr1);
        r*=100;
        cout << fixed << setprecision(2) << r << " %" << endl;


    }
    return 0;
}
