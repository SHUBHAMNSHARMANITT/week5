#include<stdio.h>
int main()
{
	int n ;
	printf("Welcome\nPlease Enter how many numbers you want to enter in your array :");
	scanf("%d",&n);
	int arr[n];
	for(int i =0;i<n;i++)
	{
	printf("\nEnter element number %d : ",i+1);
	scanf("%d",&arr[i]);
    }
    printf("Enter number which you want to check for repetiton :\n");
    int k ;
	scanf("%d",&k);
	int count = 0;
	for ( int j = 0 ; j <n ; j++)
	{
		if (arr[j]==k)
		count+=1;
	}
	printf("The number %d is repeated for %dth time",k , count);
   
	printf("\nThank You");
	return 0 ;
}
