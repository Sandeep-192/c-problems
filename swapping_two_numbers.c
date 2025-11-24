#include <stdio.h>
int main() {
    int a , b;
    printf("Enter a value:");
    scanf("%d",&a);
    printf("Enter b value:");
    scanf("%d",&b);
    printf("Before swapping\na = %d\nb = %d\n",a,b);
    int temp = a;
    a = b;
    b = temp;
    printf("After swapping\na = %d\nb = %d\n",a,b);
    
    return 0;
}
