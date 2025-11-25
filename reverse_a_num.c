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
    printf("Reverse of number %d = %d\n",originalNum,reverseNum);
    return 0;
}
