#include<stdio.h>
void main()
{
	int arr[100];		//declare an array of size 100
	int found = 0, size, i, val;
    printf("\nEnter size of the array : ");
    scanf("%d", &size);
    printf("\nEnter %d number of elements of a array : ",size);
	for(i=0;i<size;i++)
	{
        printf("\nEnter value %d :",i);
		scanf("%d",&arr[i]);
	}
    printf("\nYour Entered Array : ");
	for(i=0;i<size;i++)
	{
        printf(" %d ,",arr[i]);
	}
    printf("\nEnter the number for linear Searching : ");
	scanf("%d",&val);
    for(i=0;i<size;i++)
	{
        if(arr[i]==val){
            printf("\nFound number at %d position.", i+1);
            found = 1;
            break;
        }
	}
    if (found==0) {
        printf("\n Number not in list!!!!!");
    }
    printf("\n----------------Program Ended-------------");
	getch();
}