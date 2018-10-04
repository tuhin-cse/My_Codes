#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

int main()
{
    int a;
   // cin>>n;
    while(cin>>a)
    {
      if(a==0)
        break;
      long long carry=0;
      string s="1";
      for(int i=1;i<=a;i++)
      {
          for(int j=s.size()-1;j>=0;j--)
          {
              long long x=s[j]-48;
              long long z=((x*i)+carry)%10;
              s[j]=z+48;
              carry=((x*i)+carry)/10;
              if(j==0&&carry!=0)
              {
                  s=to_string(carry)+s;
                  carry=0;
              }
          }
      }
      int aa[10]={0};
      for(int i=0;i<s.size();i++)
        aa[(int)(s[i]-'0')]++;
      cout << a << "! --" << endl;
      printf("   (0)%5d",aa[0]);
      printf("    (1)%5d",aa[1]);
      printf("    (2)%5d",aa[2]);
      printf("    (3)%5d",aa[3]);
      printf("    (4)%5d\n",aa[4]);
      printf("   (5)%5d",aa[5]);
      printf("    (6)%5d",aa[6]);
      printf("    (7)%5d",aa[7]);
      printf("    (8)%5d",aa[8]);
      printf("    (9)%5d\n",aa[9]);

    }
    return 0;
}
