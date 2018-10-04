#include <iostream>

using namespace std;

int main()
{
    int n,c=0,temp,high=0,low=1000000,hp,lp,hf=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
     if(a[i]>high)
      {
        high = a[i];
        hp=i;
      }
      if(a[i]<=low)
      {
        low =a[i];
        lp=i;
      }
    }
    for(int i=lp;i<n-1;i++)
    {
      if(a[i]==low)
      {
       temp=a[i];
       a[i]=a[i+1];
       a[i+1]=temp;
       c++;
      }
    }
   for(int i=0;i<n;i++)
      {
        if(high==a[i])
        {
          hp=i;
          break;
        }
      }
   for( int i=hp;i>0;i--)
    {
    if(a[i]==high)
      {
       temp=a[i];
       a[i]=a[i-1];
       a[i-1]=temp;
       c++;
      }
    }
    cout<<c<<endl;
    return 0;
}
