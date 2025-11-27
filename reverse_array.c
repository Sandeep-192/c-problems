#include <stdio.h>
int main() {
    int size;
    printf("Enter size of array:");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++) {
        printf("Enter element No%d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("original array:\n");
    for(int i=0;i<size;i++) {
        printf("%d ",arr[i]);
    }
    for(int i=0;i<=size/2;i++) {
        int temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }
    printf("\nReversed array:\n");
    for(int i=0;i<size;i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}
