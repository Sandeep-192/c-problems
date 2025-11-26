#include <stdio.h>
int sumDigits(int num);
int main() {
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("sum of digits of number %d is = %d\n",num,sumDigits(num));
    return 0;
}
int sumDigits(int num) { 
    int sum = 0;
    while(num!=0) {
        int digit = num % 10;
        sum+=digit;
        num/=10;
    }
    return sum;
}
