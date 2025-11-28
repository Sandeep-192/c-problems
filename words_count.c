#include <stdio.h>
#include <string.h>
int main () {
    char string[200];
    printf("Enter string:");
    scanf("%[^\n]",string);
    int wordCount = 0;
    int inWord = 0;  //flag to check  if we are inside a word
    for(int i=0;string[i]!='\0';i++) {
        if(string[i] != ' ' && inWord == 0) {
            wordCount++;
            inWord = 1;
        }else if(string[i] == ' ') {
            inWord = 0;
        }
    }
    printf("words count = %d\n",wordCount);
    return 0;
}
