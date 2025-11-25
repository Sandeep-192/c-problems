#include <stdio.h>
int main() {
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    int isprime = 1;
    if(num<=1) {
        isprime = 0;
    } else {
        for(int i=2;i*i<=num;i++) {
            if(num % i == 0) {
                isprime =0;
                break;
            }
        }
    }
if(isprime) {
    printf("%d is a prime number\n",num);
} else {
    printf("%d is not a prime number\n",num);
}
    return 0;
}
