#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
};

void update(struct Student *s, float m)
{
    s->marks = m;
}

int main()
{
    struct Student s;
    struct Student *p;

    printf("Enter name, roll and marks: ");
    scanf("%s %d %f", s.name, &s.roll, &s.marks);

    p = &s;

    printf("\nStudent Details:\n");
    printf("Name: %s\n", p->name);
    printf("Roll: %d\n", p->roll);
    printf("Marks: %.1f\n", p->marks);

    float new_marks;

    printf("\nEnter updated marks: ");
    scanf("%f", &new_marks);

    update(p, new_marks);

    printf("Updated Marks: %.1f\n", p->marks);

    return 0;
}