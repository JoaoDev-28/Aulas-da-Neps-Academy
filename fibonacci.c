#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int a = 0, b = 1, proximo, i;

    scanf("%d", &n);

    if (n == 0) {
        printf("%d", 0);
        return 0;
    } else if (n == 1) {
        printf("%d", 1);
        return 0;
    }

    for (i = 2; i <= n; i++) {
        proximo = a + b;
        a = b;
        b = proximo;
    }

    printf("%d", b);

    return 0;
}

