#include <stdio.h>
#include <stdlib.h>
struct Bus1
{
    int i;
    char ch;
    struct Bus1 *p;
};
struct Bus2
{
    int i;
    char ch;
    struct Bus2 *p;
};
int main()
{
    struct Bus1 b1 = {10, 'A', NULL};
    struct Bus2 b2 = {20, 'B', NULL};
    b2.p = &b1;
    printf("\n b1.i = %d", b1.i);
    printf("\n b1.ch = %c", b1.ch);
    printf("\n b2.i = %d", b2.i);
    printf("\n b2.ch = %c", b2.ch);
    printf("\n b2.p->i = %d", b2.p->i);
    printf("\n b2.p->ch = %c", b2.p->ch);
    return 0;
}