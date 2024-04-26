#include <stdio.h>
struct Student
{
    char name[50];
    int rollNumber;
    float marks;
};
int main()
{
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    struct Student students[numStudents];

    for (int i = 0; i < numStudents; i++)
    {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    printf("\n\nStudent Details:\n");
    printf("Roll Number\t Name\t\t Marks\n");
    for (int i = 0; i < numStudents; i++)
    {
        printf("%d\t\t %s\t\t %.2f\n", students[i].rollNumber, students[i].name, students[i].marks);
    }
}
