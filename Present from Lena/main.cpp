#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=0;i<=n;i++)
    {
         for(int j=n-1;j>=i;j--)
           cout <<"  ";
         for(int j=0;j<=i;j++){
           j==0 ? cout << j : cout << " " << j ;
         }

         for(int j=i-1;j>=0;j--)
            cout << " " << j ;
         cout << "\n";
    }

    for(int i=0;i<n;i++)
    {
      for(int j=0;j<i;j++)
            cout <<"  ";
        for(int j=0;j<n-i;j++)
        {
            j==0 ? cout << "  " << j : cout << " " << j;
        }
         for(int j=n-i-2;j>=0;j--)
            cout << " " << j;
        cout <<"\n";
    }
    return 0;
}
