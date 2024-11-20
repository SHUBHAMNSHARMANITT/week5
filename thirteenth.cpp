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
    printf("Enter the number which is equal to the sum of two numbers from the array : ");
    int k ; 
    scanf("%d",&k);
    for(int i = 0 ; i< n ; i++)
    for(int u = i+1 ; u < n ; u++)
    {
    	if (arr[i] + arr[u]==k)
    	printf("(%d , %d) ", arr[i], arr[u]);
			}
	printf("\nThank You");
	return 0 ;
}

