#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *f1,*f2;

   f1=fopen("/home/tuhin/new.txt","w");
   char a;
   while(scanf("%c",&a)==1)
       fprintf(f1,"%c",a);

   fclose(f1);

   f2=fopen("/home/tuhin/new_copy.txt","w");
   f1=fopen("/home/tuhin/new.txt","r");

   while(fscanf(f1,"%c",&a)==1)
       fprintf(f2,"%c",a);

   fclose(f2);
   f2=fopen("/home/tuhin/new_copy.txt","r");

   while(fscanf(f2,"%c",&a)==1)
        printf("%c",a);
}
