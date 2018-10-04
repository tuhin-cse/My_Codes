#include<stdio.h>
main()
{
    char s1[100],s2[100];  //declaring two string data type array
    int i,j;
    printf("Enter first string: ");
    gets(s1);   //taking input as string in s1
    printf("Enter second string: ");
    gets(s2);   //taking input as string in s2
    for(i=0;s1[i]!='\0';i++)  //This loop will count string length

    for(j=0;s2[j]!='\0';j++,++i)  /*aThis loop will copy second
                                 string from the end of first string*/
    {


        s1[i]=s2[j];
    }
    s1[i]='\0';   /*tassaigning null ater
                   copinh all character at the end*/
    printf("After Concatenation: %s",s1);  //print ultimate output
}
