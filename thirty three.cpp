//Given a stream of numbers, print average or mean of the stream at every point.
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter the number of element\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements\n");
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    int b[n];
    for(i=1;i<=n;i++)
    {sum+=a[i];
    b[i]=sum/i;}
    for(i=1;i<=n;i++)
    {
        printf("%d",b[i]);
    }
    return 0;

}
