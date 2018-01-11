#include <stdio.h>
int main() {
    int n;
    do {
        printf("Introduceti masura unui unghi ascutit in grade: ");
        scanf("%d", &n);
        }
        while (n>90);
            printf("Eroare, incercati din nou!\n");
            printf("Introduceti masura unui unghi ascutit in grade: ");
            scanf("%d", &n);
    return 0;
        }
