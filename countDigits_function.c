#include <stdio.h>
int countDigits(int num);
int main() {
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num == 0) {
        printf("Digits count of %d = 1\n");
    } else {
        printf("Digits count of %d = %d\n",num,countDigits(num));
    }
    return 0;
}
int countDigits(int num) {
    if(num == 0) {
        return 0;
    }
    return 1 + countDigits(num / 10);
}
