// C program to illustrate concept of
// the constant pointers to pointers
#include<stdio.h>
int main()
{

	const int a = 50;
	const int b = 90;

	// ptr points to a
	const int* const ptr = &a;
	// *ptr = 90;   // Error: assignment of read-only
	// location ‘*(const int*)ptr’

	// ptr = &b;    // Error: assignment of read-only
	// variable ‘ptr’

	printf("%d\n", *ptr);
	printf("%d\n", ptr);
	return 0;
}
