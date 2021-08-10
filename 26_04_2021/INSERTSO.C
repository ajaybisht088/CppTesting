#include<stdio.h>
//insert a new element in an existing array on specified position
void main()
{
	int a[10], n, i, pos, val;
	char ch;
	// clrscr();
	//input size of array
	printf("\nEnter size of array : ");
	scanf("%d",&n);

	//input values in array
	printf("\nEnter value in sorted manner");
	for(i=0;i<n;i++)
	{
		printf("\nEnter value : ");
		scanf("%d",&a[i]);
	}

	//display array
	printf("\nExisting Array : ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}

	//ask user if wanted to insert new value pr not
	printf("\nDo you want to insert new value ?");
	// ch = getche();
	scanf(" %c", &ch);
	if(ch=='y'||ch=='Y')
	{
		//check whether array if full or not
		if(n == 9)
			printf("\nArray Full");
		else
		{
			printf("\nEnter new value : ");
			scanf("%d", &val);

			//find position
			for(i=0;i<n;i++)
			{
				if(a[i] < val && a[i+1] >= val)
				{
					pos = i+1;
				}
			}

			//shifting of array elements
			for(i=n-1;i>=pos-1;i--)
			{
				//copy element to its next position
				a[i+1] = a[i];
			}
			//insert new element at pos position
			a[pos] = val;
			//increment the size of array by 1
			n++;
			//display new array
			printf("\nNew Array : ");
			for(i=0;i<n;i++)
			{
				printf("%d\t",a[i]);
			}
		}
	}
	getch();
}
/*
	existing array : 10	20	30	40	50
	new val : 25
	new array 	: 10	20	25	30      40	50
*/