#include <stdio.h>
int main() {
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    int square = num * num;
    int cube = num * num * num;
    printf("square of %d = %d\n",num,square);
    printf("cube of %d = %d",num,cube);
    return 0;
}
