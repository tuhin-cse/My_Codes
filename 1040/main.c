#include <stdio.h>
int main()
{
    double N1,N2,N3,N4,e,N5,g;
    scanf("%lf %lf %lf %lf",&N1,&N2,&N3,&N4);
    e=((N1*2)+(N2*3)+(N3*4)+N4)/10;
    printf("Media: %.1lf\n",e);
    if(e>=7)
    {
        printf("Aluno aprovado.\n");
    }
    else if(e>=5)
    {
        printf("Aluno em exame.\n");
        scanf("%lf",&N5);
        printf("Nota do exame: .1lf\n",N5);
        g=(e+N5)/2;
        if(g>=5)
            printf("Aluno aprovado.\n");
        else if(g<=4.9)
            printf("Aluno reprovado.\n");
        printf ("Media final: %.1lf\n",g);
    }
      else
        printf("Aluno reprovado.\n");
    return 0;
}
