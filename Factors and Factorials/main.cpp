#include <bits/stdc++.h>

using namespace std;

int x[25];

void ans(int n)
{

   for(int i=0;i<25;i++)
       x[i]=0;
   int pr[25]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97},num;
   for(int i=2;i<=n;i++)
   {
       num=i;
       for(int p=0;p<25&&pr[p]*pr[p]<=num;p++)
           {
               if(num%pr[p]==0)
               {
                   while(num%pr[p]==0)
                   {
                   num/=pr[p];
                   x[p]++;
                 //  cout << pr[p] << " now" << x[p] << endl;
                  }
               }

           }
           if(num!=1)
            for(int k=0;k<25;k++)
              if(pr[k]==num)
              {
               x[k]++;
               break;
             }

   }
   printf("%3d! =",n);
   for(int i=0;pr[i]<=n && i < 15;i++)
     printf("%3d",x[i]);
   if(n>52)
   {
       cout << endl;
       cout << "      " ;
   }

   for(int i=15;pr[i]<=n && i < 25;i++)
     printf("%3d",x[i]);
   cout << endl;
}

int main()
{

  int a;
  while(cin >> a)
  {
      if(a==0)
        break;
      else
        ans(a);
  }
}
