#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    char s[1000];
    while(scanf("%s",s)!=EOF)
    {
        char a[4];
        a[0]=s[0];
        a[1]='0';
        a[2]='0';
        a[3]='0';
        int j=1;
        for(int i=1;s[i]!='\0';i++)
        {
            if(s[i]=='B'||s[i]=='P'||s[i]=='F'||s[i]=='V')
            {
                a[j]='1';
                j++;
                if(j>3)
                    break;
            }
            if(s[i]=='C'||s[i]=='S'||s[i]=='K'||s[i]=='G'||s[i]=='J'||s[i]=='Q'||s[i]=='X'||s[i]=='Z')
            {
                a[j]='2';
                j++;
                if(j>3)
                    break;

            }
            if(s[i]=='D'||s[i]=='T')
            {
                a[j]='3';
                j++;
                if(j>3)
                    break;

            }
            if(s[i]=='L')
            {
                a[j]='4';
                j++;
                if(j>3)
                    break;

            }
            if(s[i]=='M'||s[i]=='N')
            {
                a[j]='5';
                j++;
                if(j>3)
                    break;

            }
            if(s[i]=='R')
            {
                a[j]='6';
                j++;
                if(j>3)
                    break;

            }
        }
        for(int i=0;i<10;i++)
            cout<<" ";
        puts(s);
        for(int i=0;i<25;i++)
            cout<<" ";
        for(int i=0;i<4;i++)
            cout<<a[i];
        cout<<"\n";

    }

    cout << "END OF OUTPUT" << endl;
    return 0;
}
