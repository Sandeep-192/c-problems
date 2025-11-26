#include <stdio.h>
int main() {
    int n;
    printf("Enter n for prime numbers upto #n :");
    scanf("%d",&n);
    if(n<2) {
        printf("no prime numbers");
        return 0;
    }
    for(int i=2;i<=n;i++) {
        int isprime = 1;
        for(int j=2;j*j<=i;j++) {
            if(i%j == 0) {
                isprime = 0;
                break;
            } 
        }
        if(isprime) {
            printf("%d ",i);
        }
    }
    return 0;
}
