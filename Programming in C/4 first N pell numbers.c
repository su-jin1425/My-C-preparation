// 4} Pell number Pn = 2Pn-1 + Pn-2 for n ? 2, with P0 = 0, P1 = 1;  0, 1, 2, 5, 12, 29, 70, 169, 408, 985
// Sujith S 20-Sept-23
#include <stdio.h>
int pell(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return 2 * pell(n - 1) + pell(n - 2);
}
int main() {
    int n,i;
    printf("Enter N: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("%d ", pell(i));
    }
    return 0;
}

