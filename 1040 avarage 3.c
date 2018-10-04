#include<stdio.h>
main()
{
    float a,b,c,d,e,f,g;
    scanf("%f %f %f %f",&a,&b,&c,&d);
    e=(a*2+b*3+c*4+d)/10;
    printf("Media: %.1f\n",e);
    if(e>=7)
    {
        printf("Aluno aprovado.\n",e);
    }
    else if(e>=5&&e<7)
    {
        printf("Aluno em exame.\nNota do exame: ");
        scanf("%f",&f);
        g=(e+f)/2;
        if(g>=5)
        {
            printf("Aluno aprovado.\nMedia final: %.1f\n",g);

        }
        else if(g<5)
        {
            printf("Aluno reprovado.\nMedia final: %.1f\n",g);
        }
    }
    else if(e<5)
    {
        printf("Aluno reprovado.\n");
    }
    return 0;
}
