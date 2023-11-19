#include<stdio.h>
void main()
{
    int a[5],b[5],c[10],i,j=0;
    printf("enter the first array :\n");
    for(i=0; i<5; i++)
    {
        printf("Enter the elements a[%d]",i);
        scanf("d",&a[i]);
    }
  printf("enter the second array:\n");
  for(i=0; i<5; i++)
    {
      printf("Enter the elemet b[%d]",i);
      scanf("%d",&b[i]);
    }
  printf("\n first array :\n");
  for(i=0; i<5; i++)
    {
      printf("%d\t",a[i]);
      c[j]=a[i];
      j++;
    }
  printf("\n the second array :\n");
  for(i=0; i<5; i++)
    {
       printf("%d\t",b[i]);
      c[j]=b[i];
      j++;
    }
  printf("\n after merging :\n");
  for(i=0; i<10; i++)
   {
       printf("%d\t",c[i]);
   }
}
