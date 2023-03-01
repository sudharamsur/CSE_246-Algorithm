#include<stdio.h>

int main()
{
    int i,n,a[100];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int min=a[0];
    int pos;
    for(i=1; i<n; i++)
    {
        if(a[i]<min)
        {
            min = a[i];
            pos = i;

        }

    }

    printf("min value %d\n",min);
    printf("position %d",pos);
    return 0;
}
