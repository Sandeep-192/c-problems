#include <stdio.h>
int main() {
    int n;
    printf("Enter n for #n numbers of fibonacci series: ");
    scanf("%d",&n);
    int firstNum = 0,secondNum =1;
    printf("%d %d ",firstNum,secondNum);
    for(int i=2;i<=n;i++) {
        int nextNum = firstNum + secondNum;
        printf("%d ",nextNum);
        firstNum = secondNum;
        secondNum = nextNum;
    }
    return 0;
}
