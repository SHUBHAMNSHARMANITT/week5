//For the given sorted array of integers, print the number of distinct absolute values among the elements of the array.
#include<stdio.h>
int main()
{
    int n,i,j,cnt=0;
    printf("enter the elements in array\n");
    scanf("%d",&n);
    int a[n];
    int b[26]={0};
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
     for(i=0;i<n;i++)
     {
        b[a[i]-0]++;
     }
     for(i=0;i<n;i++)
     {   
        if(b[i]!=0)
        cnt++;
     }
     printf("%d",cnt);
     return 0;
}
