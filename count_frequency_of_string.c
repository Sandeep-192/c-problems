#include <stdio.h>
#include <string.h>
void sort(char str[]);
void countFrequency(char str[]);
int main() {
    char str[200];
    printf("Enter string:");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")] = '\0';
    
    countFrequency(str);
    return 0;
}
void sort(char str[]) {
    int n = strlen(str);
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(str[j] > str[j+1]) {
                char temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }
}
void countFrequency(char str[]) {
    sort(str);
    int n = strlen(str);
    char current = str[0];
    int count = 1;
    for(int i=1; i<n; i++) {
        if(str[i] == current) {
            count++;
        }else {
            printf("%c -> %d\n",current,count);
            current = str[i];
            count = 1;
        }
    }
    printf("%c -> %d\n",current,count);
}
