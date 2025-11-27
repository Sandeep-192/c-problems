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
    int minNum = arr[0];
    int maxNum = arr[0];
    for(int i=0;i<size;i++) {
        if(arr[i] < minNum) {
            minNum = arr[i];
        }
        if(arr[i] > maxNum) {
            maxNum = arr[i];
        }
    }
    printf("minNum = %d\n",minNum);
    printf("maxNum = %d\n",maxNum);
    return 0;
}
