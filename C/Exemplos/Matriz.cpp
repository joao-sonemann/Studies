/* matrix 3x2 */

#include <stdio.h>
int main()
{
    int matrix[3][2], row, column;
    
    for (row = 0; row <3; row++)
    {
        for (column = 0; column < 2; column++)
        {
            printf ("\nEnter a number for row %d column %d  ", row, column);
            scanf ("%d", &matrix[row][column]);
        }    
    } 
    
    
    for (row = 0; row <3; row++)
    {
        for (column = 0; column < 2; column++)
        {
            printf ("\nValue stored in the matrix [%d] [%d] = %d",row, column, matrix[row][column]);
        }
    }    
    
}



