#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    char a[10][100];

    for (int i=0;i<10;i++)
        cin>> a[i];

    char x[100];
    cin >> x;

    for(int i=0;i<10;i++)
        {
            if(strcmp(a[i],x)==0)
            {
                cout << "Yes \nIndex Number : " << i+1 <<endl;
                return 0;
            }
        }
    cout << "No" << endl;
    return 0;
}
