#include <stdio.h>

int main() {
    int n, i;
    long long a = 0, b = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; i++) {
        printf("%lld", a);
        if (i < n) printf(", ");
        next = a + b;
        a = b;
        b = next;
    }

    printf("\n");
    return 0;
}
```

**Sample Output:**
```
Enter the number of terms: 10
Fibonacci Series: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34
