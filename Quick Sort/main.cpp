#include <iostream>

using namespace std;
int a[10000010];

int part(int start,int end)
{
    int i=start+1,c=a[start];
    for(int j=i;j<=end;j++)
    {
        if(a[j]>c)
        {
            swap(a[j],a[i]);
            i++;
        }
    }
    swap(a[start],a[i-1]);
    return i-1;
}

void quick_sort(int start,int end)
{
    if(start<end)
    {
        int p=part(start,end);
        quick_sort(start,p);
        quick_sort(p+1,end);
    }
}

int main()
{
    int n ;
    n=100000;
    for(int i=0;i<n;i++)
    {
        a[i]=i+1;
       // cout << " " << a[i];
    }
    cout << "\n" << endl;
    quick_sort(0,n-1);
    for(int i=0;i<n;i++)
        cout << " " << a[i];
    return 0;
}
