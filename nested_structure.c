#include <stdio.h>
#include <string.h>
struct DOB {
    int day;
    int month;
    int year;
};

struct Address {
    char city[20];
    char state[20];
    int pincode;
};

struct student {
    char name[15];
    char rollNo[10];
    int phNo;
    struct DOB dob;
    struct Address addr;
};
void display(struct student s);
int main() {
    struct student s;
    printf("Enter student name:");
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = '\0';

    printf("Enter roll number:");
    fgets(s.rollNo, sizeof(s.rollNo), stdin);
    s.rollNo[strcspn(s.rollNo, "\n")] = '\0';

    printf("Enter phone number:");
    scanf("%d",&s.phNo);

    printf("enter date of birth (day month year):");
    scanf("%d %d %d",&s.dob.day,&s.dob.month,&s.dob.year);
    getchar();

    printf("Enter address details\n");
    printf("Enter city:");
    fgets(s.addr.city, sizeof(s.addr.city), stdin);
    s.addr.city[strcspn(s.addr.city, "\n")] = '\0';

    printf("Enter state:");
    fgets(s.addr.state, sizeof(s.addr.state), stdin);
    s.addr.state[strcspn(s.addr.state, "\n")] = '\0';

    printf("Enter pincode:");
    scanf("%d",&s.addr.pincode);

    display(s);

    return 0;
}
void display(struct student s) {
    printf("\n=======student details========\n");
    printf("student name    : %s\n",s.name);
    printf("student roll No : %s\n",s.rollNo);
    printf("student phNo    : %d\n",s.phNo);
    printf("Date of birth   : %02d/%02d/%04d\n",s.dob.day,s.dob.month,s.dob.year);
    printf("Address         : %s,%s,%d\n",s.addr.city,s.addr.state,s.addr.pincode);
}
