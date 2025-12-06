#include <stdio.h>
struct A {
    char a;
    int b;
    char c;
};
struct B {
    char a;
    char b;
    int c;
};
struct C {
    char a;
    double b;
    int c;
};
struct D {
    double a;
    int b;
    char c;
};

int main() {
    printf("size of struct A = %zu bytes\n",sizeof(struct A));
    printf("size of struct B = %zu bytes\n",sizeof(struct B));
    printf("size of struct C = %zu bytes\n",sizeof(struct C));
    printf("size of struct D = %zu bytes\n",sizeof(struct D));

    return 0;
}
