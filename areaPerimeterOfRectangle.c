#include <stdio.h>
int main() {
    int length,breadth;
    printf("Enter length of rectangle:");
    scanf("%d",&length);
    printf("Enter breadth of rectangle:");
    scanf("%d",&breadth);
    int area = length * breadth;
    int perimeter = 2 * (length + breadth);
    printf("area = %d\nperimeter = %d\n",area,perimeter);

    return 0;
}
