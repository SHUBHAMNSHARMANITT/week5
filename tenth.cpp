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
    int newa[n];
    int count = 0;
    int q;
     for (int i = 0 ; i < n ; i++)
    {
    	for (int j = i+1 ; j< n ; j++)
    	{
    		if( arr[i] == arr [j])
    		{
			newa[q++]=arr[j];
			count++;
    		
    	}
    		
		}
	}
	printf("The repeated numbers are :\n");
	for (int h = 0 ; h< count ; h++)
	printf("%d ",newa[h]);
	  
	printf("\nThank You");
	return 0 ;
}
