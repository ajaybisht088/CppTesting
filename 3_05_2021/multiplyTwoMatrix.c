/*
NOTE - 
Product of 2 Matrices : No of columns of 1st matrix must be equal to no of rows of 2nd matrix
			size of resultant matrix will be
				rows of 1st matrix and columns of 2nd matrix

				2 x 3     *	2 x 3 :  cannot be multiplied
				2 x 3     *     3 x 4 : can be multiplied

2 x 3		3 x 4					2 x 4

1  2  3		1  2  3  2	(1*1)+(2*4)+(3*2) (1*2)+(2*1)+(3*4) (1*3)+(2*2)+(3*1)  (1*2)+(2*5)+(3*3)
4  5  6		4  1  2  5	(4*1)+(5*4)+(6*2) (4*2)+(5*1)+(6*4) (4*3)+(5*2)+(6*1)  (4*2)+(5*5)+(6*3)
		2  4  1  3

					15		16		10		21
					36		37		28		51

				int a[10][10], b[10][10];
				int r1, r2, c1, c2;
				int c[10][10] = {0};
				for(i=0; i<r1; i++)
				{
					for(j=0; j<c2; j++)
					{
						for(k=0; k<c1; k++)
						{
							c[i][j] = c[i][j] + a[i][k] * b[k][j];

								  c[0][0] + a[0][0] * b[0][0]
							   1    =     0    +     1   *   1

							i=0,j=0	  c[0][0] + a[0][1] * b[1][0]
							   9    =      1    +    2   *    4
	
								  c[0][0] + a[0][2] * b[2][0]
							   15	 =   9    +     3    *    2

								  c[0][1] + a[0][0] * b[0][1]
							i=0,j=1	  c[0][1] + a[0][1] * b[1][1]
								  c[0][1] + a[0][2] * b[2][1]

								  c[0][2] + a[0][0] * b[0][2]
							i=0,j=2	  c[0][2] + a[0][1] * b[1][2]
								  c[0][2] + a[0][2] * b[2][2]
	
								  c[0][3] + a[0][0] * b[0][3]
							i=0,j=3	  c[0][3] + a[0][1] * b[1][3]
								  c[0][3] + a[0][2] * b[2][3]


							
								  c[1][0] + a[1][0] * b[0][0]
							i=1,j=0	  c[1][0] + a[1][1] * b[1][0]
								  c[1][0] + a[1][2] * b[2][0]

								  c[1][1] + a[1][0] * b[0][1]
							i=1,j=1	  c[1][1] + a[1][1] * b[1][1]
								  c[1][1] + a[1][2] * b[2][1]

								  c[1][2] + a[1][0] * b[0][2]
							i=1,j=2	  c[1][2] + a[1][1] * b[1][2]
								  c[1][2] + a[1][2] * b[2][2]

								  c[1][3] + a[1][0] * b[0][3]
							i=1,j=3	  c[1][3] + a[1][1] * b[1][3]
								  c[1][3] + a[1][2] * b[2][3]

						}
					}
				}
*/
#include <stdio.h>
#define MAX 10
int main()
{
    int i, j, k, r1, r2, c1, c2;
    int arr1[10][10], arr2[10][10], resultArr[10][10] = {0};

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
    if(c1==r2){
        printf("\nResultant Array : \n");
        for (i = 0; i < r1; i++){
        for (j = 0; j < c2; j++){
            for (k = 0; k < c1; k++){
                resultArr[i][j] += arr1[i][k]*arr2[k][j];
            }
            printf("%d\t", resultArr[i][j]);
        }
        printf("\n");
    }
    }
    else{
        printf("arr1 and arr2 could not get Multiplied");
    }
    getch();
    return 0;
}