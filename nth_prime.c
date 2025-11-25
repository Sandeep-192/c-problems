#include <stdio.h>
int main() {
    int n;
    printf("Enter n for #nth number:");
    scanf("%d",&n);
    int num = 2;
    int count = 0;
    while(count < n) {
        int isprime = 1;
        for(int i=2;i*i<=num;i++) {
            if(num%i== 0) {
                isprime =0;
                break;
            }
        }
        if(isprime) {
            count++;
        }
        if(count == n) {
            printf("%dth prime number is : %d\n",n,num);
            break;
        }
        num++;
    }
    return 0;
}
