#include <stdio.h>
int main () {
    char string[20];
    printf("Enter string:");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0';
    int count = 0;
    for(int i=0;string[i] != '\0';i++) {
        count++;
    }
    printf("length of the string:%d\n",count);
    return 0;
}
