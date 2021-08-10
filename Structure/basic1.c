/*******************************************************
#include <stdio.h>
struct Person {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Person p1 = {.name = "Hello", .id = 10, .salary = 45.5}; // Designated initialization supports only in c not in c++
    // printf(" Enter Employe Id : ");
    // scanf("%d", &p1.id);
    printf("\n Employe Id = %d", p1.id);
    // printf("\n Enter Employe Name : ");
    // scanf("%s", &p1.name);
    printf(p1.name);
    // printf("\n Enter Employe Salary : ");
    // scanf("%f", &p1.salary);
    printf("\n Salary = %.2f", p1.salary);
    return 0;
}
/*******************************************************
#include <stdio.h>
struct Person {
    int id;
    char name[50];
    float salary;
// }p1 = {.name = "Hello", .id = 10, .salary = 45.5};  // ok
}p1 = {10, "Hello", 45.5};  // ok

int main() {
    printf("\nEmploye Id = %d", p1.id);
    printf("\nEmploye Name : ");
    printf(p1.name);
    printf("\nSalary = %.2f", p1.salary);
    return 0;
}
/*******************************************************
#include <stdio.h>
#include <string.h>
struct Person {
    int id;
    char name[50];
    float salary;
}p1;

int main() {
    // p1 = {.name = "Hello", .id = 10, .salary = 45.5};   // error
    strcpy(p1.name , "Hello"), p1.id = 10, p1.salary = 45.5;   // ok
    printf("\nEmploye Id = %d", p1.id);
    printf("\nEmploye Name : ");
    printf(p1.name);
    printf("\nSalary = %.2f", p1.salary);
    return 0;
}
/*******************************************************
#include <stdio.h>
#include <string.h>
struct {
    int id;
    char name[50];
    float salary;
}p1;

int main() {
    strcpy(p1.name , "Hello"), p1.id = 10, p1.salary = 45.5;   // ok
    printf("\nEmploye Id = %d", p1.id);
    printf("\nEmploye Name : ");
    printf(p1.name);
    printf("\nSalary = %.2f", p1.salary);
    return 0;
}
/***********************************************************/
#include <stdio.h>
#include <string.h>
struct Person{
    int id;
    char name[50];
    float salary;
}p1;

int main() {
    strcpy(p1.name , "Hello"), p1.id = 10, p1.salary = 45.5;   // ok
    struct Person* p2 = &p1;
    // printf("\nEmploye Id = %d", p1.id);
    // printf("\nEmploye Name : ");
    // printf(p1.name);
    // printf("\nSalary = %.2f", p1.salary);
    printf("\nEmploye Id = %d", p2->id);
    printf("\nEmploye Name : ");
    printf(p2->name);
    printf("\nSalary = %.2f", p2->salary);
    return 0;
}