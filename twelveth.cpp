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
    	int k = 0;
    
    	
    		for(int p = 0 ; p< n ; p++)
			{
			if( arr[i] == arr [p])
    		k = 1;
    		else;
			}
    		if (k==0)
    		{
    			printf("%d is the first number that does not repeats :",arr[i]);
    			break;
			}
    	    
    	
	}

	  
	printf("\nThank You");
	return 0 ;
}

