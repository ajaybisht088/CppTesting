#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int i;
    struct Node *next;
} *head1, *head2, *head3, *head4;

struct Node* allocate(struct Node *abc){
    abc = (struct Node *)malloc(sizeof(struct Node));
    if(abc == NULL){
        printf("Insufficient Memory!!!");
        exit(0);
    }
    else return abc;
}

int main()
{
    head1 = allocate(head1);
    head1->i = 10;
    head2 = allocate(head2);
    head2->i = 20;
    head1->next = head2;
    head3 = allocate(head3);
    head3->i = 30;
    head2->next = head3;
    printf("\n head->i = %d", head1->i);
    printf("\n head->next->i = %d", head1->next->i);
    printf("\n head->next->next->i = %d", head1->next->next->i);
    printf("\n------------------End of Program---------------");
    return 0;
}
