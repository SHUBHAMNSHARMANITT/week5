#include<stdio.h>
int main()
{
	int n ;
	printf("Welcome\nPlease Enter how many numbers you want to enter in your array :");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
	printf("\nEnter element number %d : ",i+1);
	scanf("%d",&arr[i]);
    }
   for(int j = 0 ; j < n/2 ; j++)
   {
   	int t = arr[j];
   	arr[j]= arr[n-1-j];
   	arr[n-1-j]= t ; 
   	
   }
   for (int k = 0 ; k < n ; k++)
   {
   	printf("%d ",arr[k]);
   }
	printf("\nThank You");
	return 0 ;
}
