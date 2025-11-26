#include <stdio.h>
int max(int num1, int num2);
int main() {
    int num1,num2;
    printf("Enter two numbers:");
    scanf("%d %d",&num1,&num2);
    printf("%d is largest\n",max(num1,num2));
    return 0;
}
int max(int num1, int num2) { 
    if(num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}
