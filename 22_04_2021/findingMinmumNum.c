#include<stdio.h>

int main(){
    int arr[10], i, min;
    printf("Enter Values 10 Numbers :");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    min =arr[0];
    for(i=0;i<10;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    printf("Minimum number in the array = %d", min);
    getch();
    return 0;
}