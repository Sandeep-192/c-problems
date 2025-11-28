#include <stdio.h>
#include <string.h>
int main () {
    char originalString[20];
    printf("Enter string:");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0';
    char string[20];
    strcpy(string, originalString);
    int start = 0;
    int end = strlen(string) - 1;
    while(start < end) {
        char temp = string[start];
        string[start] = string[end];
        string[end] = temp;
        start++;
        end--;
    }
    if(strcmp(originalString, string) == 0) {
        printf("%s is a palindrome\n",originalString);
    }else {
        printf("%s is not a palindrome\n",originalString);
    }
    return 0;
}
