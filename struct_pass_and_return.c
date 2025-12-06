#include <stdio.h>
struct length {
    int x;
    int y;
};
struct length moveLength(struct length len);
int main() {
    struct length len = {10, 20};
    struct length movelen = moveLength(len);
    printf("original length:\n");
    printf("x = %d\ny = %d\n",len.x,len.y);
    printf("updated length:\n");
    printf("x = %d\ny = %d\n",movelen.x,movelen.y);
    return 0;
}
struct length moveLength(struct length len) {
    len.x += 5;
    len.y += 5;
    return len;
}
