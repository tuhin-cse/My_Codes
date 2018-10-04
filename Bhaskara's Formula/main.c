#include <stdio.h>
#include<math.h>
main()
{
    float A,B,C,d,e,f,g;
    scanf("%f %f %f",&A,&B,&C);
    d=B*B-4*A*C;
    if(d>0 && A!=0)
    {
        e=sqrt(d);
        f=(-B-e)/(2*A);
        g=(-B+e)/(2*A);
        printf("R1 = %.5f\nR2 = %.5f\n",g,f);
    }
    else
        printf("Impossivel calcular\n");
    return 0;
}
