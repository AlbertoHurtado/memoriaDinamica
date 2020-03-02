#include <stdio.h>

int main() {
    printf("Introduce numero de filas\n");
    int row=0,column=0,i=0,j=0;

    scanf("%d",&row);
    printf("Introduce numero de columnas\n");
    scanf("%d",&column);

    int matrix[row][column];
    matrix[0][1]=3;
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            matrix[i][j]=i;
        }
    }
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }


    return 0;
}