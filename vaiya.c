#include<stdio.h>
main()
{
    int size;
    printf("Enter Size:");
    scanf("%d",&size);
    int a[size],i,j,k,l,temp;
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
     l=a[0];
     for(j=1;j<size;j++)
    {
		if(k<a[j])
		   {
			   l=a[j];
		   }
		}
	for(k=0;k<size;k++)
	{
		if(a[k]==l)
		    printf("%d %d",l,k);
		    
    }
}
		
