#include <stdio.h>

typedef struct {
    char name[20];
    int ID;
    float GPA;
} students;

int main() {
    students student;
    printf("Enter the name of the student: ");
    scanf("%s", student.name);
    printf("Enter the ID of the student: ");
    scanf("%d", &student.ID);
    printf("Enter the GPA of the student: ");
    scanf("%f", &student.GPA);
    printf("Student %s, ID: %d, Has: %.2f GPA", student.name, student.ID, student.GPA);
    return 0;
}
