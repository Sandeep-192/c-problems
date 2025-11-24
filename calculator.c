#include <stdio.h>
int main() {
    //basic calculator 
    double num1,num2;
    char operator;
    printf("Enter first number:");
    scanf("%lf",&num1);
    printf(" + for additon\n - for substraction\n * for multipication\n / for division\n");
    printf("Enter operator:");
    scanf(" %c",&operator);
    printf("Enter second number:");
    scanf("%lf",&num2);
    switch(operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n",num1,num2,(num1+num2));
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n",num1,num2,(num1-num2));
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n",num1,num2,(num1*num2));
            break;
        case '/':
            if(num2 == 0) {
                printf("cannot divide by 0\n");
            } else {
                printf("%.2lf / %.2lf = %.2lf",num1,num2,(num1/num2));
            }
            break;
        default:
            printf("invalid input\n");

    }
    return 0;
}
