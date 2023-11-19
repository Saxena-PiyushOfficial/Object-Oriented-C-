#include<stdio.h>
void main()
{
    int a[5],b[5],c[10],j=0,i,k=9;
    printf("enter the first array");
    for(i=0; i<5; i++)
    {
        printf("enter the elements a[%d]",i);
        scanf("%d",&a[i]);
    }
    printf("enter the second elements\n");
    for(i=0; i<5; i++)
    {
        printf("enter the element b[%d]",i);
        scanf("%d",&b[i]);
    }
    printf("\n the first array :\n");
    for(i=0; i<5; i++)
    {
        printf("%d\t",a[i]);
        if(a[i]%2==0)
        {
            c[k]=a[i];
            k--;
        }
        else
        {
            c[j]=a[i];
            j++;
        }
    }
    printf("\n the second array :\n");
    for(i=0; i<5; i++)
    {
        printf("%d\t",b[i]);
        if(b[i]%2==0)
        {
            c[k]=b[i];
            k--;
        }
        else
        {
            c[j]=b[i];
            j++;
        }
    }
    printf("\nafter the merging\n");
    for(i=0; i<10; i++)
    {
        printf("%d\t",c[i]);

    }

}
