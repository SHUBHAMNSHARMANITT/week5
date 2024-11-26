
//Write a program in C to separate odd and even integers in separate arrays. Input one array of both odd and even integers and move them to two separate new arrays.//

#include<stdio.h>
int main()
{
    int n,i,j,k=0,d=0;
    printf("Enter the number of element:");
    scanf("%d",&n);
      int a[n];
      int b[50];
      int c[50];
      printf("\nEnter the elements:");
      for(i=0;i<n;i++)
      {
	  printf("\nEnter the elements no.%d:",i+1);
      scanf("%d",&a[i]);
      }

      for(i=0;i<n;i++)
      {
        if(a[i]%2==0)
       { b[k]=a[i];
        k++;
        }
        else
        { c[d]=a[i]; 
        d++;}
       }
        printf("The even array is :\n");
       for(i=0;i<k;i++)
       printf("%d ",b[i]);
       printf("\n");
        printf("The odd array is :\n");

       for(i=0;i<d;i++)
       printf("%d ",c[i]);
    printf("\nThank You");
       return 0;

      
}

