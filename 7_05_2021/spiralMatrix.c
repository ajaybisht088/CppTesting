#include <stdio.h>
#define MAX 10
int main()
{
    int i, j, r, c, sides, checkFlag=0;
    int arr1[10][10];
    printf("\nEnter number of rows and Columns of Matrix1 : ");
    scanf("%d%d", &r,&c);
    sides = (r<c)?r:c;
    // printf("%d",sides);
    sides = 2*sides - 1;
    printf("sides = %d",sides);
    /* Input data in arr1 */
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            printf("Enter data in arr1[%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    /* Display the arr1 */
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }
    printf("\nResultant Array : \n");
    while(sides>0){
        if(!checkFlag){
            for (j = 0; j < c; j++){
                printf("%d\t", arr1[i][j]);
            }
            // printf("\n");
            // r = 1;
            checkFlag = 1;
            sides--;
        }
        else{
            for (i = sides-r; i < r; i++){
                // for (j = 0; j < c; j++){
                printf("%d\t", arr1[i][j]);
                // }
                // printf("\n");
            }
            if(sides%2==0){
                
            }
        }
    }
    getch();
    return 0;
}
