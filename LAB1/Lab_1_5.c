#include <stdio.h>

struct Student
{
    char name[20];
    int roll;
    float marks;
};

int main()
{
    struct Student s;

    scanf("%s %d %f", s.name, &s.roll, &s.marks);

    printf("Name: %s\n", s.name);
    printf("Roll: %d\n", s.roll);
    printf("Marks: %.1f", s.marks);

    return 0;
}