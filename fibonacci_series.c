#include <stdio.h>
int main() {
    int n;
    printf("Enter n for fibonacci series:");
    scanf("%d",&n);
    int firstNum = 0, secondNum = 1;
    for(int i=0;i<n;i++) {
        int nextNum = firstNum + secondNum;
        printf("%d ",firstNum);
        firstNum = secondNum;
        secondNum = nextNum;
    }
    return 0;
}
