#include <stdio.h>
int sumArray(int arr[], int n);
int main() {
    int size;
    printf("enter size of the array:");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++) {
        printf("Enter element no%d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("sum of array elements:%d",sumArray(arr, size));
    return 0;
}
int sumArray(int arr[], int n) {
    int sum = 0;
    for(int i=0;i<n;i++) {
        sum += arr[i];
    }
    return sum;
}
