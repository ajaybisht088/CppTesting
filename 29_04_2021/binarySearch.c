#include<stdio.h>
void main()
{
	int arr[100];		//declare an array of size 100
	int i, val, low=0, mid, high, size;
    printf("\nEnter size of the array : ");
    scanf("%d", &size);
    printf("\nEnter %d number of elements of a sorted array : ",size);
	for(i=0;i<size;i++)
	{
        printf("\nEnter value %d :",i);
		scanf("%d",&arr[i]);
	}
    printf("\nYour Sorted Entered Array : ");
	for(i=0;i<size;i++)
	{
        printf(" %d ,",arr[i]);
	}
    printf("\nEnter the number for Binary Searching : ");
	scanf("%d",&val);
    high = size-1;
    while(low<=high)
	{
        mid=(low+high)/2;
        if(arr[mid]==val){
            printf("\nFound number at %d position.", mid+1);
            break;
        }
        else if(arr[mid]<val) {
            low=mid+1;
        }
        else if(arr[mid]>val) {
            high=mid-1;
        }
	}
    if (low>high) {
        printf("\n Number not in list!!!!!");
    }
    printf("\n----------------Program Ended-------------");
	getch();
}