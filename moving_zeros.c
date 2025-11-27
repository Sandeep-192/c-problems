#include <stdio.h>
int main() {
    int arr[] = {0,1,0,0,5,3,2,0,4};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("before:\n");
    for(int i=0;i<size;i++) {
        printf("%d ",arr[i]);
    }
    int flag=0;
    for( int i=0;i<size;i++) {
        if(arr[i]!=0) {
            int temp = arr[i];
            arr[i] = arr[flag];
            arr[flag] = temp;
            flag++;
        }
    }
    printf("\nafter moving zeros:\n");
    for(int i=0;i<size;i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}
