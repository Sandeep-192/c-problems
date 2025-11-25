#include <stdio.h>
int main() {
    int n;
    printf("Enter n for  #n number:");
    scanf("%d",&n);
    int num = 2;
    int count =0;
    while(count < n) {
        int isprime = 1;
        for(int j=2;j*j<=num;j++) {
            if(num%j == 0) {
                isprime =0;
                break;
            }
        }
        if(isprime) {
            printf("%d ",num);
            count++;
        }
    
        num++;
    }
    return 0;
}
