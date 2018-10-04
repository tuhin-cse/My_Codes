#include <iostream>

using namespace std;

int main()
{
    string s[6]={"Power","Time","Space","Soul","Mind","Reality"};
    string ss[6]={"purple", "green", "blue", "orange", "red", "yellow"};
    int n;
    cin >> n;
    string a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    cout << 6-n << endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<6;j++)
        {
            if(a[i]==ss[j])
                s[j]="";
        }
    }
    for(int j=0;j<6;j++)
        if(s[j]!="")
           cout << s[j] << endl;
    return 0;
}
