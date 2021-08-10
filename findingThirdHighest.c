#include<stdio.h>
int thirdHighest(int arr[], int size){
    int highest[3] = {arr[0], arr[0], arr[0]};
    for (size_t i = 1; i < size; i++)
    {
        if(arr[i]>highest[0]){
            highest[2] = highest[1];
            highest[1] = highest[0];
            highest[0] = arr[i];
        }
        else if(arr[i]>highest[1]){
            highest[2] = highest[1];
            highest[1] = arr[i];
        }
        else if(arr[i]>highest[2]){
            highest[2] = arr[i];
        }
    }
    return highest[2];
}
void main(){
    int arr[10] = {3,4,5,7,7,7,9,0,1,2};
    printf("Third Highest = %d", thirdHighest(arr, 10));
}