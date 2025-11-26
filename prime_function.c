#include <stdio.h>
void isPrime(int num);
int main() {
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    isPrime(num);
    return 0;
}
void isPrime(int num) {
    if(num < 2) {
        printf("prime numbers starts from 2\n");
    }else {
        int flag = 1;
        for(int i=2;i*i<=num;i++) {
            if(num%i==0) {
                flag = 0;
                break;
            }
        }
        if(flag) {
            printf("%d is a prime number\n",num);
        }else {
            printf("%d is not a prime number\n",num);
        }
    }
}
