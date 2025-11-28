#include <stdio.h>
#include <string.h>
void toUpper(char str[]);
int main() {
    char string[100];
    printf("Enter string:");
    fgets(string,sizeof(string),stdin);
    string[strcspn(string, "\n")] = '\0';
    toUpper(string);
    printf("upper case:\n%s",string);
    return 0;
}
void toUpper(char str[]) {
    for(int i=0;str[i]!='\0';i++) {
        if(str[i] >='a' && str[i] <='z') {
            str[i] -= 32;
        }
    }
}
