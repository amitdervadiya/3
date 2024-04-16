#include <stdio.h>


struct Student {
    int stu_id;
    char stu_name[50];
    int stu_age;
    char stu_course[50];
    char stu_city[50];
    int stu_standard;
    char stu_school[50];
};

int main() {

    struct Student students[3];
    for (int i = 0; i < 3; i++) {
        printf("Enter the details of student %d:\n", i + 1);
        printf("Student ID: ");
        scanf("%d", &students[i].stu_id);
        printf("Student Name: \n");
        scanf("%s", students[i].stu_name);
        printf("Student Age: \n");
        scanf("%d", &students[i].stu_age);
        printf("Student Course: \n");
        scanf("%s", students[i].stu_course);
        printf("Student City: \n");
        scanf("%s", students[i].stu_city);
        printf("Student Standard: \n");
        scanf("%d", &students[i].stu_standard);
        printf("Student School: \n");
        scanf("%s", students[i].stu_school);
    }

    for (int i = 0; i < 3; i++) {
        printf("\nStudent %d Details:\n", i + 1);
        printf("Student ID: %d\n", students[i].stu_id);
        printf("Student Name: %s\n", students[i].stu_name);
        printf("Student Age: %d\n", students[i].stu_age);
        printf("Student Course: %s\n", students[i].stu_course);
        printf("Student City: %s\n", students[i].stu_city);
        printf("Student Standard: %d\n", students[i].stu_standard);
        printf("Student School: %s\n", students[i].stu_school);
    }

    
}