#include<stdio.h>
int fabonacci(int);
void main()
{
	int n;
	// clrscr();

	printf("Enter number: ");
	scanf("%d",&n);

	printf("\nSum of Fabonacci series: %d ",fabonacci(n));

	// getch();
}
//0 1 1 2 3 5 8 13 21 34....
int fabonacci(int n)
{
	int i,sum=0,f1=0,f2=1, temp = 0;
	for(i=0;i<n;i++)
	{
		printf("%d, ", f1);
        sum += f1;
        temp=f1 + f2;
        f1 = f2;
        f2 = temp;
	}
	return sum;
}