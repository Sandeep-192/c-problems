#include <stdio.h>
#include <string.h>
union data {
    int num;
    char str[13];
};
int main() {
    union data d[5];
    d[0].num = 100;
    d[1].num = 101;
    d[2].num = 102;
    d[3].num = 103;
    d[4].num = 104;
    for(int i=0; i<5; ++i) {
        printf("%d\n",d[i].num);
    }
    
    strcpy(d[0].str, "Aaaaa");
    strcpy(d[1].str, "Bbbbb");
    strcpy(d[2].str, "Ccccc");
    strcpy(d[3].str, "Ddddd");
    strcpy(d[4].str, "Eeeee");
    for(int i=0; i<5; ++i) {
        printf("%s\n",d[i].str);
    }
    
 return 0;
}
