#include <stdio.h>
int main() {
    int n;
    printf("Enter n for fibonacci series:");
    scanf("%d",&n);
    int firstNum = 0, secondNum = 1, next;
    if(n<1){
        return 0;
    }
    for(int i=1;i<=n;i++) {
        if(i==1) {
            next = 0;
        } else if(i==2) {
            next = 1;
        }else {
            next = firstNum + secondNum;
            firstNum = secondNum;
            secondNum = next;
        }
    }
    
    printf("fibonacci(%d) = %d",n,next);
    return 0;
}
