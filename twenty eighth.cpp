//Write a program in C to find the ceiling in a sorted array.
#include<stdio.h>
int main()
{
    int n,i,k,cnt=0;
    printf("Enter the elements in array:");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the elements:");
     for(i=0;i<n;i++)
      {
	  printf("\nEnter the elements no.%d:",i+1);
      scanf("%d",&a[i]);
  }
    printf("\nEnter the x value:");
    scanf("%d",&k);
    for(i=0;i<n;i++)
   {  
    if(cnt==1)
    break;
     if(a[i]>k)
    {
        printf("\nThe celling off %d is %d",k,a[i]);
        cnt++;
    }
}
return 0;
}
