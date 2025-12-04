#include <stdio.h>
#include <stdlib.h>
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
        printf("enter element %d: ",i+1);
        scanf("%d",arr+i);
    }
    int *arrr[size]; //array of pointers
    for(int i=0; i<size; ++i) {
        arrr[i] = arr+i;
    }
    for(int i=0; i<size; ++i) {
        printf("%d ",*arrr[i]);
    }
    free(arr);
    return 0;
}
