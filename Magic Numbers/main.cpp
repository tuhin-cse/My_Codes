#include <iostream>
#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

int main()
{
    char a[50];
    scanf("%s",a);
    for(int i=0;a[i]!='\0'; )
    {
        if(a[i]=='1' && a[i+1]=='4' && a[i+2]=='4')
        {
            i+=3;
            continue;
        }

        else if(a[i]=='1' && a[i+1]=='4')
        {
            i+=2;
            continue;
        }

        else if(a[i]=='1' )
        {
            i++;
            continue;
        }
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
