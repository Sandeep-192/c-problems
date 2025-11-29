#include <stdio.h>
#include <string.h>
void concat(char str1[], char str2[]);
int main() {
    char str1[100],str2[100];

    printf("Enter first name:");
    fgets(str1,sizeof(str1),stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter last name:");
    fgets(str2,sizeof(str2),stdin);
    str2[strcspn(str2, "\n")] = '\0';
    concat(str1, str2);
    printf("full name: %s\n",str1);

    return 0;
}
void concat(char str1[], char str2[]) {
    int end = 0;
    for(int i=0; str1[i] != '\0'; i++) {
        end++;
    }
    for(int i=0; str2[i] != '\0'; i++) {
        str1[end++] = str2[i]; 
    }
    str1[end] = '\0';
}
