#include<stdio.h>
#define Max 1000

void Lis(int n, int a[])
{
    int l[Max],p[Max];

    for(int i=0; i<n; i++)
    {
        l[i]=0;
        p[i]=-1;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            if(a[i]>a[j] && l[i]<l[j]+1)
            {
                l[i]=l[j]+1;
                p[i]=j;
            }
        }
    }
    int max=l[0];
    for(int i=1;i<n;i++)
    {
        if(l[i]>max)
        {
            max=l[i];

        }
    }

printf("%d",max);

}
int main()
{
    int n,a[Max+1];
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    Lis(n,a);
}
