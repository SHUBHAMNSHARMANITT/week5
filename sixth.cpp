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
    if (arr[j]>arr[j+1])
    {
    	t = arr[j];
    	arr[j]= arr[j+1];
    	arr[j+1]=t;
	}
	int k ;
	printf("\n Enter the nmber which you want to find the largest and smallest :");
    scanf("%d",&k);
    printf("The %dth smallest and Largest valuse are %d , %d respectively :",k , arr[k-1] , arr[n-k]);

	printf("\nThank You");
	return 0 ;
}
