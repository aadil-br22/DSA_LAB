#include <stdio.h>

struct Student {
    char name[20];
    int roll;
    float marks;
};

int main() {
    int n, top = 0;
    struct Student s[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);

    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[top].marks)
            top = i;
    }

    printf("Topper: %s\n(%.1f)", s[top].name, s[top].marks);

    return 0;
}