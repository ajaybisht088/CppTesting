#include <stdio.h>
// int main()
// {
//     union uni
//     {
//         int i;
//         char ch;
//         double d;
//     };
//     union uni u;
//     printf("Size of union is %d", sizeof(union uni));
//     u.i = 65;
//     printf("\n%c", u.i);
//     return 0;
// }
int main()
{
    struct stu
    {
        // char ch;
        int i;
        double d;
    };
    struct stu abc;
    printf("Size of structure is %d", sizeof(struct stu));
    // abc.i = 65;
    // printf("\n%c", abc.i);
    return 0;
}