#include  <stdio.h>
#include <stdlib.h>
#include <string.h>
int countVowels(char *ptr);
int main() {
    char *string = malloc(50);
    printf("Enter a string:");
    fgets(string, 50 , stdin);
    string[strcspn(string, "\n")] = '\0';
    printf("vowels count:%d",countVowels(string));
    free(string);
    return 0;
}
int countVowels(char *ptr) {
    int count = 0;
    while(*ptr != '\0') {
        if(*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || 
           *ptr == 'u' || 
           *ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' ||
           *ptr == 'U') {
            count++;
           }
           ptr++;
    }
    return count;
}
