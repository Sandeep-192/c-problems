#include <stdio.h>
#include <stdlib.h>
int main() {
    int rows,columns;
    printf("Enter No.of rows:");
    scanf("%d",&rows);
    printf("Enter No.of columns:");
    scanf("%d",&columns);
    int **arr = malloc(rows * sizeof(int*));
    if(arr == NULL) {
        perror("malloc");
        return 1;
    }
    for(int i=0; i<rows; ++i) {
        *(arr + i) = malloc(columns * sizeof(int));
        if((*(arr + i)) == NULL) {
            perror("malloc");
            for(int j=0;j<i;++j) {
                free(*(arr+j));
            }
            free(arr);
            return 1;
        }
    }
    for(int i=0; i<rows; ++i) {
        for(int j=0; j<columns; ++j) {
            printf("Enter %d row %d element:",i+1,j+1);
            scanf("%d",(*(arr+i) + j));
        }
    }
    for(int i=0; i<rows; ++i) {
        for(int j=0; j<columns; ++j) {
            printf("%d ",*(*(arr+i) + j));
        }
        printf("\n");
    }
    for(int i=0; i<rows; ++i) {
        free(*(arr+i));
    }
    free(arr);
    return 0;
}
