#include<stdio.h>
#include<conio.h>
/*
  Array : collection of similar type of data under a common name with
	  sequential storage of memory.

	  arr[0]:1000	arr[1]:1002	arr[2]:1004	arr[3]:1006
	  arr[4]	arr[5]		arr[6]		arr[7]
	  arr[8]	arr[9]

*/
void main()
{
	int arr[10];		//declare an array of size 10
	int n, i, sum=0;
	// clrscr();
	//input size of array
	printf("\nEnter the size of array : ");
	scanf("%d",&n);
	//input values in array
	for(i=0;i<n;i++)
	{
		printf("\nEnter value : ");
		scanf("%d",&arr[i]);
		sum = sum + arr[i];
	}

	//display sum of array values
	printf("\nSum = %d",sum);
	//display array values
	printf("\nArray Values are : ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	getch();
}