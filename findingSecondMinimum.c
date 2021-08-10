#include<stdio.h>
int secondMinimum(int arr[], int size){
    int firstMinimum = arr[0], secondMinimum = arr[0];
    for (size_t i = 1; i < size; i++)
    {
        if(arr[i]<firstMinimum){
            secondMinimum = firstMinimum;
            firstMinimum = arr[i];
        }
        else if(arr[i]<secondMinimum){
            secondMinimum = arr[i];
        }
    }
    return secondMinimum;
}
void main(){
    int arr[10] = {3,4,5,6,7,8,9,0,1,2};
    printf("second minimum = %d", secondMinimum(arr, 10));
}