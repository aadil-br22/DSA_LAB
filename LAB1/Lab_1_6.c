#include <stdio.h>

struct Student
{
    char name[20];
    int roll;
    float marks;
};

int main()
{
    int n, i, top;

    scanf("%d", &n);

    struct Student s[100];

    for (i = 0; i < n; i++)
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);

    top = 0;

    for (i = 1; i < n; i++)
    {
        if (s[i].marks > s[top].marks)
            top = i;
    }

    printf("Topper: %s\n", s[top].name);
    printf("(%.1f)", s[top].marks);

    return 0;
}