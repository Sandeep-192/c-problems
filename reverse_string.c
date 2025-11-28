#include <stdio.h>
#include <string.h>
int main () {
    char string[20];
    printf("Enter string:");
    fgets(string, sizeof(string), stdin);
    string[(strcspn(string, "\n")] = '\0';
    int start = 0;
    int end = strlen(string) - 1;
    while(start < end) {
        char temp = string[start];
        string[start] = string[end];
        string[end] = temp;
        start++;
        end--;
    }
    printf("reversed string:\n%s",string);
    return 0;
}
