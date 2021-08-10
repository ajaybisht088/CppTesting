#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[20];
    int rollNum;
    struct student *next;
};
typedef struct student Student;
Student *stu = NULL, *temp = NULL, *oldTemp = NULL;
void addStuAtLast();
void addStuFrmBeg();
void delStuAtLast();
void delStuFrmBeg();
void searchStu(int);
void printAllStu();
Student *allocateStu();
void stuDetails(Student*);

Student *allocateStu(){
    Student *def = (Student *)malloc(sizeof(Student));
    if(def == NULL){
        printf("Insufficient Memory!!!");
        exit(0);
    }
    else return def;
}

void stuDetails(Student *dt){
    printf("\nEnter student Name : ");
    scanf(" %s", dt->name);
    printf("\nEnter student Roll No. : ");
    scanf(" %d", &(dt->rollNum));
}

void addStuFrmBeg(){
    temp = allocateStu();
    stuDetails(temp);
    printf("\n stu = %u", stu);
    printf("\n abc = %u", temp);
    temp->next = stu;
    stu = temp;
    temp = NULL;
}

void addStuAtLast(){
    temp = stu;
    printf("\n stu = %u", stu);
    printf("\ntemp->next = %d", temp->next);
    while(temp->next!=NULL){
        temp = temp->next;
        printf("\ntemp->next = %d", temp->next);
    }
    temp->next = allocateStu();
    printf("\n temp->next = %u", temp->next);
    stuDetails(temp->next);
    temp->next->next = NULL;
}

void delStuAtLast(){
    if(stu == NULL){
        printf("\n No student found to delete!!! ");
    }
    else{
        temp = stu;
        while(temp->next!=NULL){
            oldTemp = temp;
            temp = temp->next;
        }
        oldTemp->next = NULL;
        free(temp);
        printf("\n Deleted Last student details Successfully.");
    }
}
void delStuFrmBeg(){
    if(stu == NULL){
        printf("\n No students found to delete!!! ");
    }
    else{
        temp = stu;
        stu = stu->next;
        free(temp);
        printf("\n Deleted First student details Successfully.");
    }
}

void searchStu(int roll){
    if(stu == NULL){
        printf("\n No Students registered yet!!!");
    }
    else{
        temp = stu;
        while(temp->rollNum!=roll){
            temp = temp->next;
        }
        if(roll == temp->rollNum){
            printf("\n Student Details : ");
            printf("\n Student Name : %s", temp->name);
            printf("\n Student Roll No. : %d", temp->rollNum);
        }
        else
            printf("No student found with Roll no. %d", roll);
        temp = NULL;
    }
}

void printAllStu(){
    temp = stu;
    printf("\n ---------------List os all students--------------");
    while(temp->next!=NULL){
        printf("\n Student Name : %s", temp->name);
        printf("\n Student Roll No. : %d", temp->rollNum);
        temp = temp->next;
    }
    printf("\n Student Name : %s", temp->name);
    printf("\n Student Roll No. : %d", temp->rollNum);
}

int main()
{
    stu = allocateStu();
    printf("sizeof stu = %u", sizeof(Student));
    stuDetails(stu);
    stu->next = NULL;
    printf("sizeof stu = %u", sizeof(Student));
    // int choice, roll;
    // do
    // {
    //     printf("\n stu = %u", stu);
    //     printf("\n Enter Your Choice : ");
    //     printf("\n 1. Add student at beginning.");
    //     printf("\n 2. Add student from last.");
    //     printf("\n 3. Delete student at beginning.");
    //     printf("\n 4. Delete student from last.");
    //     printf("\n 5. Searching a student using Roll No.");
    //     printf("\n 6. Print all students list");
    //     printf("\n 7. Exit.\n");
    //     scanf(" %d", &choice);
    //     printf("\nChoice = %d", choice);
    //     switch(choice)
    //     {
    //     case 1:
    //         addStuFrmBeg();
    //         break;
    //     case 2:
    //         printf("\ncase 2 here!!!");
    //         addStuAtLast();
    //         break;
    //     case 3:
    //         delStuFrmBeg();
    //         break;
    //     case 4:
    //         delStuAtLast();
    //         break;
    //     case 5: printf("\nEnter student Roll No. : ");
    //         scanf("%d",&roll);
    //         searchStu(roll);
    //         break;
    //     case 6:
    //         printAllStu();
    //         break;
    //     case 7: break;
    //     default: break;
    //     }
    // } while(choice!=7);
}