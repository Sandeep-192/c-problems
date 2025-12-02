#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void revers(char *ptr);
int main() {
    char *string = (char*)malloc(50*sizeof(char));
    if(string == NULL) {
        printf("memory not allocated\n");
        return 1;
    }
    printf("Enter a string:");
    scanf("%s",string);
    revers(string);
    printf("revrersed string:\n%s",string);
    free(string);
    return 0;
}
void revers(char *ptr) {
    char *end = ptr + strlen(ptr) - 1;
    while(ptr < end) {
        char temp = *ptr;
        *ptr = *end;
        *end = temp;
        ptr++;
        end--;
    }
}
