#include <stdio.h>
int main() {
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    int originalNum = num;
    int sum = 0;
    while(num!=0) {
        int digit =num %10;
        sum += digit;
        num /= 10;
    }
    printf("sum of digits of number %d = %d\n",originalNum,sum);
    return 0;
}
