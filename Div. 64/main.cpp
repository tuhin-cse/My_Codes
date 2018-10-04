#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    char a[101];
    scanf("%s",a);
    int l=0;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]=='1')
        {
            for( ;a[i]!='\0';i++)
            {
                if(a[i]=='0')
                    l++;
                if(l==6)
                {
                    cout<<"yes"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"no"<<endl;
    return 0;
}
