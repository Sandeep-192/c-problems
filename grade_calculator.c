#include <stdio.h>
int main() {
    int marks;
    printf("Enter marks:");
    scanf("%d",&marks);
    if(marks >= 90) {
        printf("A grade\n");
    } else if(marks >=80) {
        printf("B grade\n");
    } else if(marks >=50) {
        printf("C grade\n");
    } else if(marks >= 40) {
        printf("D grade\n");
    } else {
        printf("better luck next time\n");
    }
    return 0;
}
