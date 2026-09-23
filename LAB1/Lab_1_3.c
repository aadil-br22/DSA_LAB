#include <stdio.h>

int main() {
    int n, a[100], key, found = -1;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            found = i;
            break;
        }
    }

    if (found != -1)
        printf("Found at index %d", found);
    else
        printf("Not found");

    return 0;
}