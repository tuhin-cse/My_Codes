#include <iostream>

using namespace std;

int main()
{
    string s;
    while(cin>>s)
    {
        if(s[0]>='0'&&s[0]<='9')
        {
            int a = atoi(s.c_str());
            int x=a/1000;
            a=a%1000;
            if(x==1)
                cout<<"M";
            if(x==2)
                cout<<"MM";
            if(x==3)
                cout<<"MMM";

            x=a/100;
            a=a%100;
            if(x==1)
                cout<<"C";
            if(x==2)
                cout<<"CC";
            if(x==3)
                cout<<"CCC";
            if(x==4)
                cout<<"CD";
            if(x==5)
                cout<<"D";
            if(x==6)
                cout<<"DC";
            if(x==7)
                cout<<"DCC";
            if(x==8)
                cout<<"DCCC";
            if(x==9)
                cout<<"CM";
            x=a/10;
            a=a%10;
            if(x==1)
                cout<<"X";
            if(x==2)
                cout<<"XX";
            if(x==3)
                cout<<"XXX";
            if(x==4)
                cout<<"XL";
            if(x==5)
                cout<<"L";
            if(x==6)
                cout<<"LX";
            if(x==7)
                cout<<"LXX";
            if(x==8)
                cout<<"LXXX";
            if(x==9)
                cout<<"XC";
            x=a;

            if(x==1)
                cout<<"I";
            if(x==2)
                cout<<"II";
            if(x==3)
                cout<<"III";
            if(x==4)
                cout<<"IV";
            if(x==5)
                cout<<"V";
            if(x==6)
                cout<<"VI";
            if(x==7)
                cout<<"VII";
            if(x==8)
                cout<<"VIII";
            if(x==9)
                cout<<"IX";
            cout<<"\n";
        }
        else
        {
            int x=0;
            for (int i=0;i<s.size();i++)
            {
                if(s[i]=='M')
                    x+=1000;
                else if(s[i]=='C'&&s[i+1]=='M')
                {
                    x+=900;
                    i++;
                }
                else if(s[i]=='D')
                    x+=500;
                else if(s[i]=='C'&&s[i+1]=='D')
                {
                    x+=400;
                    i++;
                }
                else if(s[i]=='C')
                    x+=100;
                else if(s[i]=='X'&&s[i+1]=='C')
                {
                    x+=90;
                    i++;
                }
                else if(s[i]=='L')
                    x+=50;
                else if(s[i]=='X'&&s[i+1]=='L')
                {
                    x+=40;
                    i++;
                }
                else if(s[i]=='X')
                    x+=10;
                else if(s[i]=='I'&&s[i+1]=='X')
                {
                    x+=9;
                    i++;
                }
                else if(s[i]=='V')
                    x+=5;
                else if(s[i]=='I'&&s[i+1]=='V')
                {
                    x+=4;
                    i++;
                }
                else if(s[i]=='I')
                    x++;
            }
            cout<<x<<endl;
        }

    }
    return 0;
}
