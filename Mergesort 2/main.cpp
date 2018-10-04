#include <iostream>

using namespace std;
int a[1000010];

void Merge(int start,int mid,int end)
{
    int x[end-start+1];
    int i=start,j=mid+1,z=0;
    while(i<=mid && j<=end)
    {
         if(a[i]<a[j])
        {
            x[z]=a[i];
            i++ ;z++;
        }
        else
        {
            x[z]=a[j];
            j++ ; z++;
        }
    }
    while(i<=mid)
    {
       x[z]=a[i];
       i++ ;z++;
    }
    while(j<=end)
    {
        x[z]=a[j];
        j++ ; z++;
    }
    for(i=start,j=0;i<=end;i++,j++)
    {
         a[i]=x[j];
    }
}

void MergeSort(int start,int end)
{
    if(start < end)
    {
        int mid=(start+end)/2;
        MergeSort(start,mid);
        MergeSort(mid+1,end);
        Merge(start,mid,end);
    }
}

int main()
{
    int n;
    cin >> n ;
    for(int i=0;i<n;i++)
    {
        a[i]=n-i;
        cout << a[i] << " ";

    }
    cout << " \n\n \n \n \n \n \n \n \n";
    MergeSort(0,n-1);
    for(int i=0;i<n;i++)
        cout << " " << a[i];
    return 0;
}

