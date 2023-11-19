#include<stdio.h>
void main()
{
    int a[5],i;
    printf("enter the array :\n");
    for(i=0; i<5; i++)
    {
        printf("Enter the elements a[%d]",i);
        scanf("%d",a[i]);
  }
  pintf("\n the array before changes :\n ");
  for(i=0; i<5; i++)
  {
      printf("%d\t",a[i]);
      if(a[i]%2==0)
      {
          a[i]=a[i]+1;
      }
      else
      {
          a[i]=a[i]+3;
      }
  }
  printf("\n the array after change :\n");
  for(i=0; i<5; i++)
  {
      printf("%d\t",a[i]);
  }
}


