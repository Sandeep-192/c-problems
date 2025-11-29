#include <stdio.h>
#include <string.h>
void removeSpaces(char str[]);
int main() {
    char str[200];
    printf("Enter string:");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")] = '\0';
    
    removeSpaces(str);
    printf("after removing spaces:\n%s",str);
    return 0;
}
void removeSpaces(char str[]) {
    int j = 0;
    for(int i=0; str[i]!='\0'; i++) {
        if(str[i] != ' ') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}
