#include <stdio.h>
int main () {
    char string[20];
    printf("Enter string:");
    scanf("%[^\n]",string);
    int vowelCount = 0, consonantCount = 0;
    for(int i=0;string[i] != '\0';i++) {
        if((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z')){
            if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' ||
                string[i] == 'o' || string[i] == 'u' ||
                string[i] == 'A' || string[i] == 'E' || string[i] == 'I' ||
                string[i] == 'O' || string[i] == 'U') {
                vowelCount++;
            } else {
                consonantCount++;
            }
        }
    }
    printf("vowels = %d\n",vowelCount);
    printf("consonants = %d\n",consonantCount);
    return 0;
}
