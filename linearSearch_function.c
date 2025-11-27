#include <stdio.h>
int linerSearch(int arr[], int n, int key);
int main() {
    int arr[] = {1,23,43,45,56,43,56,45};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    printf("Enter key element:");
    scanf("%d",&key);
    int index = linerSearch(arr, size, key);
    if(index != -1){
        printf("%d found at index: %d\n",key,index);
    } else {
        printf("%d not found in array\n",key);
    }
    return 0;
}
int linerSearch(int arr[], int n, int key) {
    for(int i=0;i<n;i++) {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;
}
