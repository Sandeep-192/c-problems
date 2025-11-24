#include <stdio.h>
int main() {
    double fahrenheit;
    printf("Enter temperature in fahrenheit:");
    scanf("%lf",&fahrenheit);
    double celsius = (5.0/9.0) * (fahrenheit - 32);
    printf("%.2lf F is equal to %.2lf C ",fahrenheit,celsius);
    return 0;
}
