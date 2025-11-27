#include <stdio.h>
#include <limits.h>
int main() {
    int size;
    printf("Enter size of the array:");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++) {
        printf("Enter element no%d:",i+1);
        scanf("%d",&arr[i]);
    }
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    for(int i=0;i<size;i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if(arr[i] < largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }
    if(secondLargest == INT_MIN) {
        printf("no second largest number!\n");
    } else {
        printf("second largest number is = %d\n",secondLargest);
    }
    return 0;
}
