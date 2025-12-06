#include <stdio.h>
#include <string.h>
union demo {
    int i;
    float f;
    char str[13];
};
int main() {
    union demo d;
    printf("size of demo union : %zu\n",sizeof(union demo));

    d.i = 100;
    printf("after updating i\n");
    printf("i = %d\n",d.i);
    printf("f = %f\n",d.f);
    printf("str = %s\n",d.str);

    d.f = 10.8;
    printf("after updating f\n");
    printf("i = %d\n",d.i);
    printf("f = %f\n",d.f);
    printf("str = %s\n",d.str);

    strcpy(d.str, "hello");
    printf("after updating str\n");
    printf("i = %d\n",d.i);
    printf("f = %f\n",d.f);
    printf("str = %s\n",d.str);
 return 0;
}
