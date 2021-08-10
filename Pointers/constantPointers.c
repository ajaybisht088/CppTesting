// C++ program to illustrate concept
// of the constant pointers
// #include<stdio.h>
// int main()
// {

// 	int a = 90;
// 	int b = 50;

// 	int* const ptr = &a;
// 	printf("%d\n", *ptr);
// 	printf("%d\n", ptr);

// 	// Address what it points to

// 	*ptr = 56;

// 	// Acceptable to change the
// 	// value of a

// 	// Error: assignment of read-only
// 	// variable ‘ptr’
// 	// ptr = &b;	// error

// 	printf("%d\n", *ptr);
// 	printf("%d\n", ptr);

// 	return 0;
// }
#include<stdio.h>
int main() {
	int a = 90;
	int b = 50;
	int* const ptr = &a;
	printf("%d\n", *ptr);
	printf("%d\n", ptr);
	*ptr = 56;		// ok
	// ptr = &b;	// error
	printf("%d\n", *ptr);
	printf("%d\n", ptr);
	return 0;
}
