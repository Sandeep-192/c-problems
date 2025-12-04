#include <stdio.h>
float add(float a, float b);
float sub(float a, float b);
float mul(float a, float b);
float div(float a, float b);
void greet();
float operate(float a, float b, float (*fp)(float, float),void (*greet)());
int main() {
    float a = 20, b = 10;
    printf("add = %.2f\n",operate(a, b, add, greet));
    printf("sub = %.2f\n",operate(a, b, sub, greet));
    printf("mul = %.2f\n",operate(a, b, mul, greet));
    printf("div = %.2f\n",operate(a, b, div, greet));

    return 0;
}
float add(float a, float b){
    return a+b;
}
float sub(float a, float b){
    return a-b;
}
float mul(float a, float b){
    return a * b;
}
float div(float a, float b){
    return a/b;
}
void greet(){
    printf("hello from callback fuction\n");
}
float operate(float a, float b, float (*fp)(float, float),void (*greet)()) {
    greet();
    return fp(a,b);
}
