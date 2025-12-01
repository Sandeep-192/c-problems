#include <stdio.h>
void swap(int *a, int *b);
int main() {
    int a,b;
    printf("Enter a and b:");
    scanf("%d %d",&a, &b);
    printf("before swapping:\n");
    printf("a=%d\nb=%d\n",a,b);
    swap(&a,&b);
    printf("After swapping:\n");
    printf("a=%d\nb=%d\n",a,b);
    return 0;
}
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
