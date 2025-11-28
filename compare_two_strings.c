#include <stdio.h>
#include <string.h>
int compare(char str1[], char str2[]);
int main() {
    char str1[100],str2[100];

    printf("Enter string1:");
    fgets(str1,sizeof(str1),stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter string2:");
    fgets(str2,sizeof(str2),stdin);
    str2[strcspn(str2, "\n")] = '\0';

    printf("%d",compare(str1,str2));
    return 0;
}
int compare(char str1[], char str2[]) {
    for(int i=0;str1[i]!='\0' || str2[i]!='\0';i++) {
        if(str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
    }
    return 0;
}
