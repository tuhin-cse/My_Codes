#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int h,u,d,f;
    float t,uu;
    while(1)
    {
      int da=0;
      t=0;
      cin>>h>>u>>d>>f;
      float dc=(float)(u*(float)f/100);
      uu = (float)u;
      if(h==0)
          break;
      while(1)
      {
          da++;
          t+=uu;
          if(t>h)
          {
            cout<< "success on day " << da<< endl;
            break;
          }
          t-=d;
          if(t<0)
          {
            cout << "failure on day " << da << endl;
            break;
          }
          uu-=dc;
          if(uu<0)
            uu=0;
      }

    }
    return 0;
}
