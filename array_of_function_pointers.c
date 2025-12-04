#include <stdio.h>
float add(float a, float b);
float sub(float a, float b);
float mul(float a, float b);
float div(float a, float b);
int main() {
    float a = 50, b = 25;
    float (*fp[4])(float, float) = {add, sub, mul, div};
    char *names[] = {"addtion", "substraction", "multiplication", "division"};
    for(int i=0; i<4; ++i) {
        printf("%s = %.2f\n",names[i],fp[i](a, b));
    }
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
