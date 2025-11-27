#include <stdio.h>
int factorial(int num);
int main() {
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num < 0) {
        printf("factorial of negative numbers is not defined!");
    } else {
        printf("factorial(%d):%d",num,factorial(num));
    }
    return 0;
}
int factorial(int num) {
    if(num == 0 || num == 1) {
        return 1;
    }
     return num * factorial(num-1);
}
