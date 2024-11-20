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
    printf("Enter the number which is equal to the sum of three numbers from the array : ");
    int k ; 
    scanf("%d",&k);
    for(int i = 0 ; i< n ; i++)
    for(int u = i+1 ; u < n ; u++)
    for(int l = u+1 ; l < n ; l++)
    {
    	if (arr[i] + arr[u] + arr[l]==k)
    	printf("(%d , %d , %d) ", arr[i], arr[u] , arr[l]);
			}
	printf("\nThank You");
	return 0 ;
}

