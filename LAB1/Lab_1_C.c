#include <stdio.h>

int main() {
    int a[100], n, key, i;
    int found = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            printf("Found at index %d", i);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Not found");

    return 0;
}