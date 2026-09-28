#include <stdio.h>

struct Student
{
    char name[20];
    int roll;
    float marks;
};

void addGrace(struct Student a[], int n, float g)
{
    for(int i = 0; i < n; i++)
        a[i].marks = a[i].marks + g;
}

int countPass(struct Student a[], int n, float cut)
{
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if(a[i].marks >= cut)
            count++;
    }

    return count;
}

int main()
{
    int n;
    scanf("%d", &n);

    struct Student a[n];

    for(int i = 0; i < n; i++)
        scanf("%s %d %f", a[i].name, &a[i].roll, &a[i].marks);

    addGrace(a, n, 5);

    printf("After grace: ");

    for(int i = 0; i < n; i++)
        printf("%.0f ", a[i].marks);

    printf("\nPassed = %d", countPass(a, n, 40));

    return 0;
}