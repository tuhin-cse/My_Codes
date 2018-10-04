#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,l;
    cin >> n >> l ;
    int a[l];
    for(int i=0;i<l;i++)
        cin >> a[i];

    sort(a,a+l);
    int max,min;
    max=min=0;
    for(int i=0,j=0;i<l;i++)
    {
        int x=a[i];
        while(x)
        {
            min+=x;
            x--;
            j++;
            if(j==n)
                break;
        }
        if(j==n)
            break;
    }
    for(int i=a[l-1],c=0;i>0;i--)
    {
      for(int j=l-1;j>=0;j--)
      {
          if(i==a[j])
          {
              c++;
              max+=a[j];
              a[j]--;
          }
          if(c==n)
            break;
      }
      if(c==n)
            break;
    }
    cout << max << " "<< min << endl;
    return 0;
}
