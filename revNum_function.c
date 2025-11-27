#include <stdio.h>
int revNum(int num);
int main() {
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num < 0) {
        printf("negative numbers are not allowed!\n ");
        return 0;
    }
    printf("revers of the number %d is = %d\n",num,revNum(num));
    return 0;
}
int revNum(int num) {
    static int rev = 0;
    if(num == 0) {
        int ans = rev;
        rev = 0;
        return ans;
    }
     rev = rev *10 + (num % 10);
    return revNum(num / 10);
}
