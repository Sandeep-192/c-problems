#include <stdio.h>
void swap(int *num1, int *num2);
int main() {
    int a,b;
    printf("Enter a value:");
    scanf("%d",&a);
    printf("Enter b value:");
    scanf("%d",&b);
    printf("berfore swapping:\na=%d\nb=%d\n",a,b);
    swap(&a,&b);
    printf("after swapping:\na=%d\nb=%d\n",a,b);
    return 0;
}
void swap(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
