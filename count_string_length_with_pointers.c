#include <stdio.h>
#include <stdlib.h>
int length(char *ptr);
int main() {
    char *string = (char*)malloc(100*sizeof(char));
    if(string == NULL) {
        printf("memory is not allocated!\n");
        return 1;
    }
    printf("Enter a string:");
    scanf("%s",string);
    printf("Length:%d\n",length(string));
    free(string);
    return 0;
}
int length(char *ptr) {
    int count = 0;
    while(*ptr != '\0') {
        count++;
        ptr++;
    }
    return count;
}
