#include <stdio.h>
int computeSum(int n) {
    int sum = 0;
    int nextValue = 1;
    for (int i = 0; i<=n; i++)  {
        sum += nextValue;
        nextValue *= 3;
        }
        printf("Suma este %d", sum);
        return 0;
        }
int main() {
    int n;
    printf("Intorduceti valoare lui n: ");
    scanf("%d", &n);
    computeSum(n);
    return 0;
}
