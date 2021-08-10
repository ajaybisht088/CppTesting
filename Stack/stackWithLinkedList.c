/*******************************************************************************/
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

struct StackNode{
    int data;
    struct StackNode* next;
};

struct StackNode* getNode(int data){
    struct StackNode* ptr = (struct StackNode*)malloc(sizeof(struct StackNode));
    ptr->data = data;
    ptr->next = NULL;
    return ptr;
}
int pop(struct StackNode** newNode);
int peek(struct StackNode** newNode);
int push(struct StackNode** newNode, int data);
int isEmpty(struct StackNode* currentNode);
int push(struct StackNode** newNode, int data){
    struct StackNode* currentNode = *newNode;
    *newNode = getNode(data);
    (*newNode)->next = currentNode;
    return (*newNode)->data;
}
int isEmpty(struct StackNode* currentNode){
    return !currentNode;
}
int peek(struct StackNode** newNode){
    if(isEmpty(*newNode)){
        return INT_MIN;
    }
    return (*newNode)->data;
}
int pop(struct StackNode** newNode){
    if(isEmpty(*newNode)){ return INT_MIN; }
    struct StackNode *temp = *newNode;
    *newNode = (*newNode)->next;
    int poppedData = temp->data;
    free(temp);
    return poppedData;
}

void main(void){
    struct StackNode* node = NULL;
    printf("%d data is created at stack\n", push(&node, 10));
    printf("%d data is created at stack\n", push(&node, 20));
    printf("%d data is created at stack\n", push(&node, 30));
    printf("%d\n", peek(&node));
    printf("%d is poped out\n", pop(&node));
    printf("%d\n", peek(&node));
    printf("%d is poped out\n", pop(&node));
    printf("%d\n", peek(&node));
    printf("%d is poped out\n", pop(&node));
    printf("%d\n", peek(&node));

}
/***********************************************************************/ 