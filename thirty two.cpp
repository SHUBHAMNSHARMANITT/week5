/*You are given an integer 'n' which denote the number of elements in an array a[ ]and an integer 'x'. You have to calculate the average of element a[i] 
and x and find out if that number exist in array or not. Do it for all the elements of array and store the count result in another array for each index i.*/
#include<stdio.h>
int main()
{
  int n,i,j,k;
    printf("enter the number of element\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the number\n");
    scanf("%d",&k);
    int avg[n];
    int b[n];
    for(i=0;i<n;i++)
    {
      b[i]=0;
    }
    for(i=0;i<n;i++)
  {
    avg[i]=(k+a[i])/2;
  }
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
        if(avg[i]==a[j])
        b[i]++;
      }
    }
    for(i=0;i<n;i++)
    printf("%d",b[i]);
    return 0;
    
}
