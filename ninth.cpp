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
    int total = ((n+2)*(n+1)/2);
    int count = 0 ;
    
    for (int j = 0 ; j < n ; j++)
    count += arr[j];
    printf("THe missing number is %d in the range of 1 to %d", total - count , n+1);
	printf("\nThank You");
	return 0 ;
}
