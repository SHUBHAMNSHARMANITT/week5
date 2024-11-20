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
    int t = 0;
    
     for (int i = 0 ; i < n ; i++)
    {
    	int count = 0;
    	for (int j = i+1 ; j< n ; j++)
    	{
    		if( arr[i] == arr [j])
    		{ count+=1;
			}
			if (count>=n/2)
			{
				printf("%d is the majority element ",arr[i]);
				t = 1;
			}
    	
    		
		}
	}
	if (t==0)
	printf("no majority element");
	printf("\nThank You");
	return 0 ;
}
