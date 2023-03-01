#include<stdio.h>

int main()
{
    int i,n,a[100];
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    printf("Enter the element of the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int item;
    printf("Enter The Item Number: ");
    scanf("%d",&item);
    for(i=0; i<n; i++)
    {
        if(item==a[i])
        {
            printf("Item is Found");
            break;
        }
    }
    if (i==n)
    {
        printf("Item is not Found");
    }
}

