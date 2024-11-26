
/*Write a program in C to insert New value in the array (unsorted list)*/

#include<stdio.h>
int main()
{
     int n,i,value,position;
     printf("Enter the number of element:");
    scanf("%d",&n);
    printf("\nEter the number inserted:");
    scanf("%d",&value );
    printf("\nEnter the postion:");
    scanf("%d",&position);
    int a[(n)];
    printf("\nEnter the elements:");
    for(i=0;i<n;i++)
      {
	  printf("\nEnter the elements no.%d:",i+1);
      scanf("%d",&a[i]);
      }
    for(i=n;i>=position;i--)
    a[i]=a[i-1];

    a[position]=value;
    printf("\nUpdated array:\n");
    for (int i = 0;i<n;i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}







