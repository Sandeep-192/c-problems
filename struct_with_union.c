#include <stdio.h>
#include <string.h>
struct value {
    int type;
    union data {
        int i;
        float f;
        char c;
        char str[20];
    }data;
};
void printValue(struct value v);
int main() {
    struct value v;
    v.type = 1;
    v.data.i = 100;
    printValue(v);

    v.type = 2;
    v.data.f = 99.9;
    printValue(v);

    v.type = 3;
    v.data.c = 'a';
    printValue(v);

    v.type = 4;
    strcpy(v.data.str, "hello");
    printValue(v);

    return 0;
}
void printValue(struct value v) {
    switch(v.type) {
        case 1:
            printf("integer value:%d\n",v.data.i);
            break;
        case 2:
            printf("float value:%.2f\n",v.data.f);
            break;
        case 3:
            printf("char value:%c\n",v.data.c);
            break;
        case 4:
            printf("string value:%s\n",v.data.str);
            break;
        default:
            printf("invalid type\n");
        
    }
}
