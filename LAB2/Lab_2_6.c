#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
};

struct Student findTopper(struct Student a[], int n)
{
    struct Student topper = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i].marks > topper.marks)
        {
            topper = a[i];
        }
    }

    return topper;
}

int main()
{
    int n;

    scanf("%d", &n);

    struct Student a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", a[i].name);
        scanf("%d", &a[i].roll);
        scanf("%f", &a[i].marks);
    }

    struct Student topper = findTopper(a, n);

    printf("Topper: %s (%.1f)", topper.name, topper.marks);

    return 0;
}