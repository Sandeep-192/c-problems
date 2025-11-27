#include <stdio.h>
int fibonacci(int num);
int main() {
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num <= 0) {
        printf("No fibonacci number!");
    } else {
        printf("fibonacci(%d):%d",num,fibonacci(num));
    }
    return 0;
}
int fibonacci(int num) {
    if(num == 1) {
        return 0;
    }
    if(num == 2) {
        return 1;
    }
    return fibonacci(num-1)+fibonacci(num-2); 
}
