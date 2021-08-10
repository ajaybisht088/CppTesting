#include<stdio.h>
void main()
{
	int arr[10];		//declare an array of size 10
	int n, i, largest, secondLargest;
	// clrscr();
	//input size of array
	printf("\nEnter the size of array : ");
	scanf("%d",&n);
	//input values in array
	for(i=0;i<n;i++)
	{
		printf("\nEnter value : ");
		scanf("%d",&arr[i]);
		// sum = sum + arr[i];
	}
	// printf("\nArray Values are : ");
    largest = arr[0];
    secondLargest = arr[0];
	for(i=0;i<n;i++)
	{
        if(arr[i]>largest) {
            secondLargest=largest;
            largest = arr[i];
        }
        if(arr[i]>secondLargest&&arr[i]<largest){
            secondLargest=arr[i];
        }
	}
    printf("Second Largest Number = %d\t",secondLargest);
	getch();
}