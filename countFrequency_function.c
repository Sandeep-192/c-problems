#include <stdio.h>
void bubbleSort(int arr[], int n);
void countFrequency(int arr[], int n);
int main() {
    int size;
    printf("Enter size of the array:");
    scanf("%d",&size);
    if(size < 1) {
        return 0;
    }
    int arr[size];
    for(int i=0;i<size;i++) {
        printf("Enter element no%d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("frequencies:\n");
    countFrequency(arr, size);
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
void countFrequency(int arr[], int n) {
    bubbleSort(arr, n);
    int current = arr[0];
    int count = 1;
    for(int i=1;i<n;i++) {
        if(arr[i] == current) {
            count++;
        }else {
            printf("%d -> %d\n",current,count);
            current = arr[i];
            count = 1;
        }
    }
    printf("%d -> %d\n",current,count);
}
