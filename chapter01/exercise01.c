#include <stdio.h>
#include <stdlib.h>

int intcomp(const void* x, const void* y) {
    return *(const int*)x - *(const int*)y;
}

int a[10000000];

int main(void) {
    int n = 0;
    while (scanf("%d", &a[n]) != EOF) n++;
    qsort(a, n, sizeof(int), intcomp);
    for (int i = 0; i < n; i++)
        printf("%d\n", a[i]);

    return 0;
}

