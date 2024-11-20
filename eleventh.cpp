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
     for (int i = 0 ; i < n ; i++)
    {
    	for (int j = i+1 ; j< n ; j++)
    	{
    		if( arr[i] == arr [j])
    		{
			printf("%d is the first element that repeats at index %d",arr[i], j);
			
    	
		}
	}

	  
	printf("\nThank You");
	return 0 ;
}
}
