#include <stdio.h>

struct Student {
    char name[20];
    int roll;
    float marks;
};

int main() {
    struct Student s;

    scanf("%s %d %f", s.name, &s.roll, &s.marks);

    printf("Name: %s, Roll: %d, Marks: %.1f", s.name, s.roll, s.marks);

    return 0;
}