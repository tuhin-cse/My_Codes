#include <iostream>

using namespace std;

int main()
{
    int d,x;
    cin >> d;
    long long a[d],mid,sum1=0,sum2=0;
    mid=d/2;
    for(int i=0;i<d;i++)
    {
        cin >> a[i];
        if (i<=mid)
            sum1+=a[i];
        else
            sum2+=a[i];
    }
    if(sum1==sum2)
    {
        cout << sum1 << endl;
        return 0;
    }
    if(sum1>sum2)
    {
        while(sum1>sum2)
        {
          sum1-=a[mid];
          sum2+=a[mid];
          mid--;
        }
        if(sum1==sum2)
        {
        cout << sum1 << endl;
        return 0;
        }
    }
    else
    {
        while(sum1<sum2)
        {
          mid++;
          sum1+=a[mid];
          sum2-=a[mid];
        }
        if(sum1==sum2)
        {
        cout << sum1 << endl;
        return 0;
        }
    }
    int z=mid+1;
    while(sum1!=sum2)
    {
        if(sum1>sum2)
        {
            sum1-=a[mid];
            mid--;
        }
        if(sum1<sum2)
        {
             sum2-=a[z];
             z++;
        }
    }
    cout << sum1 << endl;
    return 0;
}
