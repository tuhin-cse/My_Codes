#include<stdio.h>
main()
{
  int l,a[5]={0},i,j,s=0;
  scanf("%d",&l);
  for(i=0;i<l;i++)
     {
      scanf("%d",&j);

      if(j<5)
       a[j-1]++;
      else
        s++;
     }
  for(i=0;i<5;i++)
     printf("%d paice  %d vut\n",i+1,a[i]);

  printf("spoil vote %d",s);


}
