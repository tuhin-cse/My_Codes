#include <bits/stdc++.h>

using namespace std;



int main()
{
    int divisor[1000000]={0};

    for(int i=2;i<1000000;i++)
    {
        for(int j=i;j<1000000;j+=i)
            divisor[j]++;
    }

    int prime[46]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61,
                       67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127 ,
                       131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199};


    int in[1000]={0};
    for(int i=0;i<46;i++)
    {
        for(int j=i+1;j<46;j++)
            {
                if(prime[i]*prime[j]>1000)
                    break;
                else
                {
                    in[prime[i]*prime[j]]=1;
                }
            }
    }



   // cout << divisor[999927]+1 << "    " << in[divisor[999927]+1];
  //cout << 50 << endl;
   int c=0;
   for(int i=50;i<1000000;i++)
   {
       if(in[divisor[i]+1] )
       {
           c++;
           if((c-1)%9==0)
            cout << i <<  endl;
       }

   }


}
