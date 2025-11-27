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
    int evenCount = 0;
    int oddCount = 0;
    for(int i=0;i<size;i++) {
        if(arr[i]%2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    printf("total even numbers:%d\n",evenCount);
    printf("total odd numbers: %d\n",oddCount);
    return 0;
}
