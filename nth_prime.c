#include <stdio.h>
int main() {
    int n;
    printf("Enter n for prime numbers upto #n :");
    scanf("%d",&n);
    if(n<1) {
        printf("no prime number");
    }
    int count = 0;
    int num = 2;
    while(count < n) {
        int isprime = 1;
        for(int i=2;i*i<=num;i++) {
            if(num%i == 0) {
                isprime = 0;
                break;
            }
        }
        if(isprime) {
            count++;
        }
        if(count == n) {
            printf("%dth prime is %d\n",n,num);
            break;
        }
        num++;
    }
    return 0;
}
