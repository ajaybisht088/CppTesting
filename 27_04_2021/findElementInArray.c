#include<stdio.h>
void main()
{
	int arr[10], pos[10];		//declare an array of size 10
	int searchNum, i, index, size, posCounter=0;
    printf("\nEnter 10 elements of the array : ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
    printf("\nEnter the number for searching : ");
	scanf("%d",&searchNum);
    printf("\nArray Elements = ");
    for(i=0;i<10;i++)
	{
		printf("\n%d",arr[i]);
	}
    for(i=0;i<10;i++)
	{
        if(searchNum==arr[i]){
            printf("\nFond number");
            pos[posCounter] = i;
            posCounter++;
            // break;   // use this if you dont want to 
                        // search the same number at multiple positions
        }
	}
    if (posCounter == 0) {
        printf("\n Number not found!!!!!");
    }
    else if(posCounter==1){
        printf("\n number found at position = %d", pos[0]);
    }
    else{
        printf("\n number found at multiple positions : ");
        for(i=0;i<posCounter;i++)
        {
            printf("\n %d",pos[i]);
        }
    }
    printf("\n----------------Program Ended-------------");
	getch();
}