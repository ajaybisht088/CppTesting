#include<stdio.h>
void main(){
    char arr[] = "Hello", temp;
    int size = sizeof(arr)/sizeof(char);
    int halfSize = (sizeof(arr)/sizeof(char) - 1)/2;
    printf("size = %d\n", size);
    for (size_t i = 0, j=size-2; i < halfSize; i++, j--) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    printf("%s", arr);
}