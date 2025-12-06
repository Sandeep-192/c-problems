#include <stdio.h>
#include <string.h>
struct student {
    char name[20];
    int marks;
};
void sort(struct student s[], int n);
int main() {
    int n;
    printf("Enter no of students:");
    scanf("%d",&n);
    getchar();

    struct student s[n];

    for(int i=0; i<n; ++i) {
        printf("\n======Enter student %d details======\n",i+1);
        printf("Enter student name:");
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0';

        printf("enter marks:");
        scanf("%d",&s[i].marks);
        getchar();
    }
    sort(s,n);
    printf("\n====== students details after sorting by name and then marks====\n");
    for(int  i=0; i<n; ++i)   {
        printf("student name : %s\n",s[i].name);
        printf("marks : %d\n",s[i].marks);
    }
    return 0;
}
void sort(struct student s[], int n) {
    for(int i=0; i<n-1; ++i) {
        for(int j=0; j<n-i-1; ++j) {
            if(strcmp(s[j].name, s[j+1].name) > 0) {
                struct student temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            } else if(strcmp(s[j].name, s[j+1].name) == 0) {
                if(s[j].marks < s[j+1].marks) {
                    struct student temp = s[j];
                    s[j] = s[j+1];
                    s[j+1] = temp;
                }
            }
        }
    }
}
