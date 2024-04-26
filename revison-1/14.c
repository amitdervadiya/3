#include <stdio.h>
struct Student
{
    char name[50];
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
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    float totalMarks = 0;
    for (int i = 0; i < numStudents; i++)
    {
        totalMarks += students[i].marks;
    }
    float averageMarks = totalMarks / numStudents;
    printf("\nAverage marks of %d students: %.2f\n", numStudents, averageMarks);

}
