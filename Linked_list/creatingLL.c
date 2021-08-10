#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int i;
    struct Node *next;
};

struct Node *head;

int main()
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    if(ptr == NULL){
        printf("Insufficient Memory!!!");
        exit(0);
    }
    else{
        head = (struct Node *)malloc(sizeof(struct Node));
        if(head == NULL){
            printf("Insufficient Memory!!!");
            exit(0);
        }
        printf("\n Enter the data of first Node : ");
        scanf("%d", &(ptr->i));
        ptr->next = head;
        head->i = 50;
        printf("\n ptr->next->i = %d", ptr->next->i);
        // head = ptr;
        printf("\n End of Program byeeee......");
    }
    return 0;
}