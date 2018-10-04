#include<stdio.h>
void main()
{
    int a,b;
    float x;
    scanf("%d %d",&a,&b);
    switch(a)
    {
    case 1:
        x=4.0*b;
        printf("Total: R$ %.2f\n",x);
        break;
    case 2:
        x=4.5*b;
        printf("Total: R$ %.2f\n",x);
        break;
    case 3:
        x=5.0*b;
        printf("Total: R$ %.2f\n",x);
        break;
    case 4:
        x=2.0*b;
        printf("Total: R$ %.2f\n",x);
        break;
    case 5:
        x=1.5*b;
        printf("Total: R$ %.2f\n",x);
        break;
    }
  return 0;
}
