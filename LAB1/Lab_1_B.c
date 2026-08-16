#include <stdio.h>
#include <string.h>

struct Student {
    char name[20];
    int roll;
    float marks;
};

int main() {
    struct Student s1;

    s1.roll = 12;
    strcpy(s1.name, "Asha");
    s1.marks = 88.5;

    printf("%s %d %.1f", s1.name, s1.roll, s1.marks);

    return 0;
}