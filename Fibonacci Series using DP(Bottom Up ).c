#include<stdio.h>

int fib(int n)
{
    int F[n+2],i;
    //if (n<=1)
    F[0]=0,F[1]=1;
    for (i=2; i<n+1; i++)
    {
        F[i]=F[i-2]+F[i-1];
    }
    return F[n];

}
int main()
{   int n;
    scanf("%d",&n);
    printf("%d ",fib(n));

}
