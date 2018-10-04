#include<stdio.h>
struct info
{
    char name[20];
    int roll;
    float cgpa;
};
int main()
{
    struct info data[5],temp;
    int i,j;
    for(i=0;i<5;i++)
    {
        scanf("%s %d %f",&data[i].name,&data[i].roll,&data[i].cgpa);
    }
    for(j=0;j<4;j++)
    {
        for(i=j+1;i<5;i++)
        {
        if(data[j].cgpa<data[i].cgpa)
        {
            temp=data[j];
            data[j]=data[i];
            data[i]=temp;
        }
        }

    for(i=0;i<5;i++)
    {
        printf("\n%s\n%d\n%.1f\n",data[i].name,data[i].roll,data[i].cgpa);
    }
  return 0;
}
}
