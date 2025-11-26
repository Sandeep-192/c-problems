#include <stdio.h>
void isEven(int num);
int main() {
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num <1) {
        printf("number must grater then 0\n");
    } else {
        isEven(num);
    }
    return 0;
}
void isEven(int num) { 
    if(num%2 == 0) {
        printf("%d is even\n",num);
    } else {
        printf("%d is odd\n",num);
    }
}
