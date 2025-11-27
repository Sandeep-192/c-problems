#include <stdio.h>
void copyArray(int src[], int dest[], int n);
void printArray(int arr[], int n);
int main() {
    int size;
    printf("Enter size of the array:");
    scanf("%d",&size);
    int src[size];
    for(int i=0;i<size;i++) {
        printf("Enter element no%d: ",i+1);
        scanf("%d",&src[i]);
    }
    int dest[size];
    printf("source array:\n");
    printArray(src, size);
    copyArray(src, dest, size);
    printf("\ncopied array:\n");
    printArray(dest, size);
    return 0;
}
void copyArray(int src[], int dest[], int n) {
    for(int i=0;i<n;i++) {
        dest[i] = src[i];
    }
}
void printArray(int arr[], int n) {
    for(int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
}
