#include <stdio.h>
#include <math.h>
int main() {
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    int originalNum = num;
    double sum = 0;
    int digits = 0;
    int temp = num;
    while(temp!=0) {
        temp /= 10;
        digits++;
    }
    temp = num;
    while(temp!=0) {
        int digit =temp%10;
        sum = sum + pow(digit,digits);
        temp /= 10;
    }
    if(sum == originalNum) {
        printf("%d is a Armstrong number\n",originalNum);
    } else {
        printf("%d is not a Armstrong number\n",originalNum);
    }
    
    
    return 0;
}
