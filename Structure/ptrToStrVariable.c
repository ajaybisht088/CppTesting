#include <stdio.h>
struct Person
{
    int id;
    char name[50];
    float salary;
};
int main()
{
    struct Person *p2;
    // struct Person p1, *p2;
    // p2 = &p1;
    printf(" Enter Employe Id : ");
    scanf("%d", &p2->id);
    printf("\n Employe Id = %d", p2->id);
    // printf("\n Employe Id = %d", (*p2).id); //p2->id is equivalent to (*p2).id
    printf("\n Enter Employe Name : ");
    scanf("%s", &p2->name);
    printf("\n Employe Name = %s", p2->name);
    printf("\n Enter Employe Salary : ");
    scanf("%f", &p2->salary);
    printf("\n Salary = %.2f", p2->salary);
    return 0;
}