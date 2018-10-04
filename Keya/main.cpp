#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int num,pr=0,i;
    scanf("%d",&num);
    for(i = 2;i<num;i++)
    {
        if(num%i==0)
            pr=1;
    }

    if(pr==0)
        printf("%d is prime",num);
    else
        printf("%d is prime",num);
    return 0;
}
