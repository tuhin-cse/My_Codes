#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
     int w;
     cin>>w;
     int word['{']={0},cont['{']={0};
      char c;
       int n;
     for(int i=0;i<w;i++)
     {
      cin>>c>>n;
      word[c]=n;
     }
     char a[10001];
     int x;
     cin>>x;
     for(int i=0;i<x;i++)
     {
       scanf("%s",&a);
       for(int j=0;a[j]!='\0';j++)
          cont[a[j]]++;
     }
     int sum=0;
     for(char ch=0;ch<'{';ch++)
         sum+=(word[ch]*cont[ch]);

     cout<<sum<<endl;
   }

}
