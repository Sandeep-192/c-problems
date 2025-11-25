#include <stdio.h>
int main() {
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    int factorial =1;
    for(int i=2;i<=num;i++) {
        factorial *= i;
    }
    printf("Factorial of %d is %d\n",num,factorial);
    return 0;
}
