#include<stdio.h>
void main()
{
	int arr1[50], arr2[50], finalArr[100];
	int size1, size2, i, finalArrSize=0;
    printf("\nEnter size of First array : ");
    scanf("%d", &size1);
    printf("\nEnter %d number of elements of First array : ",size1);
	for(i=0;i<size1;i++)
	{
        printf("\nEnter value %d :",i);
		scanf("%d",&arr1[i]);
        finalArr[i] = arr1[i];
	}
    finalArrSize = i;
    printf("\nFirst Array : ");
	for(i=0;i<size1;i++)
	{
        printf(" %d ,",arr1[i]);
	}
    printf("\nEnter size of Second array : ");
    scanf("%d", &size2);
    printf("\nEnter %d number of elements of Second array : ",size2);
	for(i=0;i<size2;i++)
	{
        printf("\nEnter value %d :",i);
		scanf("%d",&arr2[i]);
        finalArr[finalArrSize++] = arr2[i];
        
	}
    printf("\nSecond Array : ");
	for(i=0;i<size2;i++)
	{
        printf(" %d ,",arr2[i]);
	}
    printf("\nNew Array : ");
    for(i=0;i<finalArrSize;i++)
    {
        printf(" %d ,",finalArr[i]);
    }
    
    printf("\n----------------Program Ended-------------");
	getch();
}