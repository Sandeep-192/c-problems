#include <stdio.h>
void bubbleSort(int arr[], int n);
int main() {
    int size;
    printf("enter size of array:");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++) {
        printf("Enter no%d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("before sorting:\n");
    for(int i=0;i<size;i++) {
        printf("%d ",arr[i]);
    }
    bubbleSort(arr,size);
    printf("\nafter sorting:\n");
    for(int i=0;i<size;i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}
void bubbleSort(int arr[], int n) {
    for(int i=0;i<n-1;i++) {
        for(int j=0;j<n-i-1;j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
