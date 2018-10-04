#include <iostream>

using namespace std;


int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    //cout << "Enter the values : " ;
    int a[n];
    for(int i=0;i<n;i++)
         {
             a[i]=n-i;
             cout << a[i] << " ";
         }
   cout << " \n \n \n \n";
   for(int i=1;i<n;i++)
    {
        int temp=a[i];
        int j=i;
        while(j>0 && temp<a[j-1])
        {
            a[j]=a[j-1];
            j--;
        }
        a[j]=temp;
    }
    cout << "\n\nAfter Sort : " << endl;
    for(int i=0;i<n;i++)
        cout << " " << a[i] ;
    cout << endl;

    return 0;
}
