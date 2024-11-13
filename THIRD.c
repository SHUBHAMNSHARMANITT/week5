/*THIRD PROGRAM
C PROGRAM TO SORT THE ELEMENTS IN DESCENDING ORDER
BY SHUBHAM SHARMA DATE :16 OCT 2024*/
#include<stdio.h>
int main()
{
	int n , i , j , t;
	printf("Welcome\nPlease Enter how many numbers you want to enter in your array :");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
	printf("\nEnter element number %d : ",i+1);
	scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    for(j=0;j<n-i-1;j++)
    if (arr[j]<arr[j+1])
    {
    	t = arr[j];
    	arr[j]= arr[j+1];
    	arr[j+1]=t;
	}
   
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	printf("\nThank You");
	return 0 ;
}
