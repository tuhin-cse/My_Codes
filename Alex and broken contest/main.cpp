#include <iostream>


using namespace std;

int main()
{
    string s,a;
    int c=0;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        int k=i;
        a="";
        if(s[i]=='A')
        {
            int t=3;
            while(t--)
            {
               a+=s[i];
               i++;
            }
            if(a=="Ann")
                c++;
        }
        a="";
        if(s[i]=='D')
        {
            int t=5;
            while(t--)
            {
               a+=s[i];
               i++;
            }
            if(a=="Danil")
                c++;
        }
         a="";
        if(s[i]=='N')
        {
            int t=6;
            while(t--)
            {
               a+=s[i];
               i++;
            }
            if(a=="Nikita")
                c++;
        }
         a="";
        if(s[i]=='O')
        {
            int t=4;
            while(t--)
            {
              a+=s[i];
               i++;
            }
            if(a=="Olya")
                c++;
        }
         a="";
        if(s[i]=='S')
        {
            int t=5;
            while(t--)
            {
               a+=s[i];
               i++;
            }
            if(a=="Slava")
                c++;
        }
        i=k;
    }


    if(c==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
