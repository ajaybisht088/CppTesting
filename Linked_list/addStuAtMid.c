#include <stdio.h>
#include <stdlib.h>
struct Student
{
    char *name;
    int rollNum;
    struct Student *next;
}*stu1, *stu2, *stu3, *stu4, *stu5;

struct Student* allocate(){
    struct Student *abc = (struct Student *)malloc(sizeof(struct Student));
    if(abc == NULL){
        printf("Insufficient Memory!!!");
        exit(0);
    }
    else return abc;
}

struct Student *stp = NULL, *temp = NULL;

int main()
{
    stu1 = allocate();
    stu1->name = "Raju";
    stu1->rollNum = 10;
    stu2 = allocate();
    stu2->name = "Shyamu";
    stu2->rollNum = 20;
    stu1->next = stu2;
    stu3 = allocate();
    stu4->name = "Ramu";
    stu3->rollNum = 30;
    stu2->next = stu3;
    stu4 = allocate();
    stu4->name = "Kaalu";
    stu4->rollNum = 40;
    stu3->next = stu4;
    stu4->next = stu1;
    stp = stu1;
    temp = stp;
    int counter = 0;
    printf("temp->next = %u ", temp->next);
    printf("stp = %u ", stp);

    // while(temp->next!=stp){
    //     printf("\n Student %d Details :", counter+1);
    //     printf("\n Name : %s", temp->name);
    //     printf("\n Roll No. : %d", temp->rollNum);
    //     temp = temp->next;
    //     counter++;
    // }
    // counter = 0;
    // temp = stp;
    // while(temp->next!=stp){
    //     temp = temp->next;
    //     counter++;
    // }
    // temp = stp;
    // int mid = counter/2;
    // counter = 0;
    // while(counter!=mid){
    //     temp = temp->next;
    //     counter++;
    // }
    // stu5 = allocate();
    // stu5->name = "Pintu";
    // stu5->rollNum = 50;
    // stu5->next = temp->next;
    // temp->next = stu5;
    // temp = stp;
    // counter = 0;
    // while(temp->next!=stp){
    //     printf("\n Student %d Details :", counter+1);
    //     printf("\n Name : %d", temp->name);
    //     printf("\n Roll No. : %d", temp->rollNum);
    //     temp = temp->next;
    //     counter++;
    // }
    printf("\n------------------End of Program---------------");
    return 0;
}
