#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct employee {
    char name[20];
    int id;
    float salary;
};
void inputEmployee(struct employee *e);
void printEmployee(struct employee *e);
void updateEmployee(struct employee *e);
int main() {
    struct employee *emp = malloc(sizeof(struct employee));
    if(emp == NULL) {
        perror("malloc");
        return 1;
    }

    printf("=====Enter employee details=====\n");
    inputEmployee(emp);

    printf("=====employee details before update======\n");
    printEmployee(emp);

    updateEmployee(emp);

    printf("\n======employee details after update======\n");
    printEmployee(emp);

    free(emp);
    return 0;
}
void inputEmployee(struct employee *e){
    printf("Enter employee name:");
    fgets(e->name, sizeof(e->name), stdin);
    e->name[strcspn(e->name, "\n")] = '\0';

    printf("Enter employee id:");
    scanf("%d",&e->id);

    printf("Enter employee salary:");
    scanf("%f",&e->salary);
}
void printEmployee(struct employee *e){
    printf("employee name: %s\n",e->name);
    printf("employee id  : %d\n",e->id);
    printf("salary       : %.2f\n",e->salary);
}
void updateEmployee(struct employee *e) {
    int choice;
    printf("======what do you want to update======\n");
    printf("1.employee name\n2.id\n3.salary\n");
    printf("enter choice (1/2/3) :");
    scanf("%d",&choice);
    getchar();

    switch(choice) {
        case 1:
            printf("enter new name:");
            fgets(e->name, sizeof(e->name), stdin);
            e->name[strcspn(e->name, "\n")] = '\0';
            break;
        case 2:
            printf("enter new id:");
            scanf("%d",&e->id);
            break;
        case 3:
            printf("enter new salary:");
            scanf("%f",&e->salary);
            break;
        default:
            printf("invalid choice");
    }

}
