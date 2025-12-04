#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int size;
    printf("Enter size of the array:");
    scanf("%d",&size);
    int *arr = malloc(size * sizeof(int));
    if(arr == NULL) {
        perror("malloc");
        return 1;
    }
    for(int i=0; i<size; ++i) {
        printf("Enter element %d: ",i+1);
        scanf("%d",arr+i);
    }
    int (*ap)[size] = malloc(sizeof(int[size]));
    if(ap == NULL) {
        perror("malloc");
        return 1;
    }
    for(int i=0;i<size;++i) {
        (*ap)[i] = *(arr+i);
    }
    for(int i=0; i<size; ++i) {
        printf("%d ",(*ap)[i]);
    }
    free(arr);
    free(ap);

    return 0;
}
