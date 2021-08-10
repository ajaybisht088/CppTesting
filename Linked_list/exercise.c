#include<stdio.h>
#include <stdlib.h>
struct Node 
{
	int i;
	char *(name[4]);
	struct Node *next;
};

int main()
{
	struct Node *n = (struct Node * )malloc(sizeof(struct Node));

	printf("\nEnter Number : ");
	scanf("%d", &(n->i));
	printf("\nEnter Name : ");
	scanf("%s", n->name);

	printf("\nName  = %s",n->name);
	printf("\nNumber  = %d",n->i);

	return 0;
}