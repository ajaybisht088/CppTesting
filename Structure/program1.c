#include <stdio.h>
struct Person
{
    int id;
    char name[20];
    float salary;
};
int main()
{
    struct Person p1 = {123, "Rocky", 20000};
    printf("\n Employe Id = %d", p1.id);
    printf("\n Employe name = %s",p1.name);
    printf("\n Salary = %0.2f", p1.salary);
    return 0;
}