#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    char a[10000];
    while(fgets(a,10000,stdin))
    {
      for(int i=0;a[i]!='\0';i++)
      {
          if(a[i]=='=')
            a[i]='-';
          else if(a[i]=='-')
            a[i]='0';
          else if(a[i]=='0')
            a[i]='9';
         else if(a[i]=='9')
            a[i]='8';
         else if(a[i]=='8')
            a[i]='7';
            else if(a[i]=='7')
            a[i]='6';
            else if(a[i]=='6')
            a[i]='5';
            else if(a[i]=='5')
            a[i]='4';
            else if(a[i]=='4')
            a[i]='3';
            else if(a[i]=='3')
            a[i]='2';
            else if(a[i]=='2')
            a[i]='1';
            else if(a[i]=='1')
            a[i]='`';
            else if(a[i]=='\\')
            a[i]=']';
            else if(a[i]==']')
            a[i]='[';
            else if(a[i]=='[')
            a[i]='P';
            else if(a[i]=='P')
            a[i]='O';
            else if(a[i]=='O')
            a[i]='I';
            else if(a[i]=='I')
            a[i]='U';
            else if(a[i]=='U')
            a[i]='Y';
         else if(a[i]=='Y')
            a[i]='T';
          else if(a[i]=='T')
            a[i]='R';
          else if(a[i]=='R')
            a[i]='E';
         else if(a[i]=='E')
            a[i]='W';
         else if(a[i]=='W')
            a[i]='Q';
         else if(a[i]=='\'')
            a[i]=';';
         else if(a[i]==';')
            a[i]='L';
         else if(a[i]=='L')
            a[i]='K';
         else if(a[i]=='K')
            a[i]='J';
         else if(a[i]=='J')
            a[i]='H';
         else if(a[i]=='H')
            a[i]='G';
         else if(a[i]=='G')
            a[i]='F';
         else if(a[i]=='F')
            a[i]='D';
         else if(a[i]=='D')
            a[i]='S';
        else if(a[i]=='S')
            a[i]='A';
         else if(a[i]=='/')
            a[i]='.';
         else if(a[i]=='.')
            a[i]=',';
         else if(a[i]==',')
            a[i]='M';
         else if(a[i]=='M')
            a[i]='N';
         else if(a[i]=='N')
            a[i]='B';
         else if(a[i]=='B')
            a[i]='V';
         else if(a[i]=='V')
            a[i]='C';
         else if(a[i]=='C')
            a[i]='X';
         else if(a[i]=='X')
            a[i]='Z';
      }
      cout<<a;
    }
    return 0;
}
