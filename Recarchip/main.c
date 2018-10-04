#include <stdio.h>
#include <stdlib.h>

void f(int n)
{
    if(n==0)
        return;
    f(n-1);
    printf("%d\n",n);

}
int main()
{
    f(5);
    return 0;
}
