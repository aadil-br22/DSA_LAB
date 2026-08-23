#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
};

void printStudent(struct Student s)
{
    printf("Name: %s\n", s.name);
    printf("Roll: %d\n", s.roll);
    printf("Marks: %.1f\n", s.marks);
}

void updateMarks(struct Student *s, float m)
{
    s->marks = m;
}

int main()
{
    struct Student s;
    float m;

    scanf("%s", s.name);
    scanf("%d", &s.roll);
    scanf("%f", &s.marks);

    printStudent(s);

    scanf("%f", &m);

    updateMarks(&s, m);

    printf("After update:\n");
    printStudent(s);

    return 0;
}