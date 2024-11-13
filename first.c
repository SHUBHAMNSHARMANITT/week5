/*FIRST PROGRAM
C PROGRAM TO FIND THE MINIMUM AND MAXIMIMUM AND AVERAGE IN AN UNSORTED ARRAY OF INTEGERS
BY SHUBHAM SHARMA DATE :16 OCT 2024*/
#include<stdio.h>
int main()
{
	int n , i;
	printf("Welcome\nPlease Enter how many numbers you want to enter in your array :");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
	printf("\nEnter element number %d : ",i+1);
	scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for (i=0;i<n;i++)
    {
    	if(max<arr[i])
    	max= arr[i];
	}
	printf("The maximum of given array is %d\n",max);
	int min = arr[0];
    for (i=0;i<n;i++)
    {
    	if(min > arr[i])
    	min= arr[i];
	}
	printf("The manimum of given array is %d\n",min);
	float sum =0;
	for (i=0 ; i<n ; i++)
	sum+= arr[i];
	printf("The average of given array is %f\n",sum/n);
	printf("Thank You");
	return 0;
	
	
}
