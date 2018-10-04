/*
ID: tuhinab1
LANG: C++
TASK: milk2
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
   ifstream fin("milk2.in");
   ofstream fout("milk2.out");
   bitset<1000001> tm;
   tm.reset();
   int n,s,e,start=9999999,end=0,l1,l0,lm=0,li=0;
   fin >> n ;
   for(int i=0;i<n;i++)
   {
       fin >> s >> e;
       if(s<start)
          start=s+1;
       if(end<e)
          end=e;
       for(int i=s+1;i<=e;i++)
          tm.set(i);
   }
   for(int i=start;i<=end;)
   {
       if(tm[i]==0)
       {
           l0=0;
           while(tm[i]==0 && i<=end)
           {
              l0++;
              i++;
           }
          if(l0>li)
             li=l0;

       }
        if(tm[i]==1)
       {
           l1=0;
           while(tm[i]==1 && i <=end)
           {
              l1++;
              i++;
           }
          if(l1>lm)
             lm=l1;
       }
   }
 //  cout << start <<"  " << end << endl;
   fout << lm << " " << li << endl;
}
