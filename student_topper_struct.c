#include <stdio.h>
#include <string.h>
struct student {
    char name[15];
    int rollNo;
    int marks[5];
};
int average(struct student s);
int main() {
    int n;
    printf("Enter no.of students:");
    scanf("%d",&n);

    struct student s[n];

    getchar();

    for(int i=0;i<n;++i) {
        printf("======Ener student %d details======\n",i+1);
        printf("enter student name:");
        fgets(s[i].name,sizeof(s[i].name),stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0';

        printf("enter student roll No:");
        scanf("%d",&s[i].rollNo);

        for(int j=0;j<5;++j) {
            printf("enter subject%d marks:",j+1);
            scanf("%d",&s[i].marks[j]);
        }
        getchar();
    }
    int avg[n];
    for(int i=0;i<n;++i) {
        avg[i] = average(s[i]);
    }
    int topperIndex = 0;
    for(int i=1;i<n;++i) {
        if(avg[i] > avg[topperIndex]) {
            topperIndex = i;
        }
    }
    printf("\n========topper details==========\n");
    printf("name    : %s\n",s[topperIndex].name);
    printf("roll No : %d\n",s[topperIndex].rollNo);
    printf("average : %d\n",avg[topperIndex]);
    return 0;
}
int average(struct student s) {
    int total = 0;
    for(int i=0;i<5;++i) {
        total += s.marks[i];
    }
    int avg = total / 5;
    return avg;
}
