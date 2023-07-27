// WAP to multiply matrix of different size if possible using 2D array.
#include <stdio.h>

void multiply_matrices(int mat1[][10], int rows1, int cols1, int mat2[][10], int rows2, int cols2, int result[][10])
// row1,row2 are dimensions of mat1
// matrix ma suruko row ko size mention nagarda ni hunxa tara column ko size lekhnu parxa , tara kina thahaxaina
{
    if (cols1 != rows2)
    // matrix multiply garna ko lagi suruko matrix ko colunm ra second ko matrix ko row ko size milnu parxa,
    // it is mathematics
    {
        printf("Matrices cannot be multiplied.\n");
        return;
    }

    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main()
{
    int rows1, cols1, mat1[10][10], mat2[10][10], result[10][10];
    printf("Enter the dimensions of the first matrix (rows cols): ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    int rows2, cols2;
    printf("Enter the dimensions of the second matrix (rows cols): ");
    scanf("%d %d", &rows2, &cols2);

    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    multiply_matrices(mat1, rows1, cols1, mat2, rows2, cols2, result);

    printf("Final Matrix\n");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}