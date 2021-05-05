#include <stdio.h>
#define MAX 10
int main()
{
    int i, j, r1, r2, c1, c2;
    int arr1[10][10], arr2[10][10], resultArr[10][10];

    printf("\nEnter number of rows and Columns of Matrix1 : ");
    scanf("%d%d", &r1,&c1);
    printf("\nEnter number of rows and columns of Matrix2 : ");
    scanf("%d%d", &r2,&c2);

    /* Input data in arr1 */
    for (i = 0; i < r1; i++){
        for (j = 0; j < c1; j++){
            printf("Enter data in arr1[%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    /* Display the arr1 */
    for (i = 0; i < r1; i++){
        for (j = 0; j < c1; j++){
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }
    /* Input data in arr2 */
    for (i = 0; i < r2; i++){
        for (j = 0; j < c2; j++){
            printf("Enter data in arr2[%d][%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
    /* Display the arr2 */
    for (i = 0; i < r2; i++){
        for (j = 0; j < c2; j++){
            printf("%d\t", arr2[i][j]);
        }
        printf("\n");
    }
    if(r1==r2&&c1==c2){
        printf("\nResultant Array : \n");
        for (i = 0; i < r2; i++){
        for (j = 0; j < c2; j++){
            resultArr[i][j] = arr1[i][j] - arr2[i][j];
            printf("%d\t", resultArr[i][j]);
        }
        printf("\n");
    }
    }
    else{
        printf("arr1 and arr2 could not get subtracted");
    }
    getch();
    return 0;
}