#include <stdio.h>
int main() {
    int n;
    printf("Enter n for #nth term of fibonacci series: ");
    scanf("%d",&n);
    int firstNum = 0,secondNum = 1;
    if(n==1) {
        printf("%dth term is :%d",n,firstNum);
        return 0;
    }
    if(n==2) {
        printf("%dth term is :%d",n,secondNum);
        return 0;
    }
    for(int i=2;i<n;i++) {
        int nextNum = firstNum + secondNum;
        firstNum = secondNum;
        secondNum = nextNum;
    }
    printf("%dth term is :%d",n,secondNum);

    return 0;
}
