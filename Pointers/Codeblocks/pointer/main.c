#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i=10;
    int *p , *q;
    // *q=4
    p = &i;
    *q = *p;
    printf("%d\n%d", *p, *q);
    printf("\n%d\n%d", p, q);
    return 0;
}
