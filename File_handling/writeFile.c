#include <stdio.h>
#include <stdlib.h>
struct student{
    char name[20];
    int rollNum;
};
void main()
{
    struct student st1 = {"ajay", 65};
    struct student st2 = {"Pankaj", 66};
    // char str[50];
    FILE *fp = fopen("writeTest.txt", "wb");
    if(fp == NULL){
        printf("Couldn't open the file!!!! ");
        exit(0);
    }
    else{
        fwrite(&st1,sizeof(struct student),1,fp);
        // fwrite("\n",sizeof("\n"),1,fp);
        fwrite("\n",1,1,fp);
        fwrite(&st2,sizeof(struct student),1,fp);
        printf("Write succcessfully");
    }
    fclose(fp);
}