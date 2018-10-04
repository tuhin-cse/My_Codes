#include <iostream>

using namespace std;

void solve(int n)
{
      int a,x;
      cin >> a;
      n--;
      int arr[n];
      for(int i=0;i<n;i++)
      {
        cin >> x ;
        arr[i]=abs(a-x);
        a=x;
      }
      for(int i=2;i<n;i++)
      {
         if(abs(arr[i]-arr[i-1])!=abs(arr[i-1]-arr[i-2]))
         {
            cout << "Not jolly" << endl;
            return;

         }
      }
      cout << "Jolly" << endl;
}

int main()
{
    int n;
    while(cin >> n)
    {
      solve(n);
    }
    return 0;
}
