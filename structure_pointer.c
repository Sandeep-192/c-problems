#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student {
    char name[20];
    char rollNo[10];
    int marks;
};
int main() {
    struct student *s = malloc(sizeof *s);
    if(s == NULL) {
        perror("malloc");
        return 1;
    }
    printf("Enter student name:");
    fgets(s->name, sizeof(s->name), stdin);
    s->name[strcspn(s->name, "\n")] = '\0';

    printf("Enter roll num:");
    fgets(s->rollNo, sizeof(s->rollNo), stdin);
    s->rollNo[strcspn(s->rollNo, "\n")] = '\0';

    printf("Enter marks:");
    scanf("%d",&s->marks);

    printf("====student details====\n");
    printf("student name: %s\n",s->name);
    printf("roll number : %s\n",s->rollNo);
    printf("marks       : %d\n",s->marks);

    free(s);
    return 0;
}
