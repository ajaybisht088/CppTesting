// C program to illustrate concept
// of the pointers to constant
// #include <stdio.h>
// int main()
// {

// 	int high = 100, low = 66;
// 	const int* score = &high;

// 	// Pointer variable are read from
// 	// the right to left
//     printf("%d\n", *score);
//     high = 200; // it can pe possible
//     printf("%d\n", *score);
//     // *score = 300;    // but it can't be possible
// 	// Score is a pointer to integer
// 	// which is constant *score = 78

// 	// It will give you an Error:
// 	// assignment of read-only location
// 	// ‘* score’ because value stored in
// 	// constant cannot be changed
// 	score = &low;   // it can also be possible

// 	// This can be done here as we are
// 	// changing the location where the
// 	// score points now it points to low
// 	printf("%d\n", *score);

// 	return 0;
// }
#include <stdio.h>
int main() {
	int high = 100, low = 66;
	const int* score = &high;
    printf("\t%d\n", *score);
	// *score = 300;    // error
    high = 200; // ok
    printf("\t%d\n", *score);
	score = &low;   // ok
	printf("\t%d\n", *score);
	return 0;
}
