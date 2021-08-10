#include<stdio.h>

int main(){
    int arr[10], i, sum;
    printf("Enter Values 10 Numbers :");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    sum = arr[0];
    for(i=0;i<10;i++){
        if(arr[i]<sum){
            sum = arr[i];
    }
    printf("Minimum number in the array = %d", sum);
    getch();
    return 0;
}