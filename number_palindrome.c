#include <stdio.h>
int main() {
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    int originalNum = num;
    int reverseNum = 0;
    while(num>0) {
        int digit =num %10;
        reverseNum = (reverseNum * 10) + digit;
        num /= 10;
    }
    if(originalNum == reverseNum) {
        printf("%d is a palindrome\n",originalNum);
    } else {
        printf("%d is not a palindrome\n",originalNum);
    }
    return 0;
}
