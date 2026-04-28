#include <stdio.h>

int main() {
    int n, m;

    printf("Введіть кількість рядків n: ");
    scanf("%d", &n);
    printf("Введіть кількість стовпців m: ");
    scanf("%d", &m);
    int a[n][m];
    printf("\nВведення елементів матриці:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    // Пошук рядків з нулем
    printf("\nНомера рядків з хоча б одним нулем:\n");
    int found = 0;  
    for (int i = 0; i < n; i++) {
        int hasZero = 0;       //чи є 0 у рядку
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 0) {
                hasZero = 1;       //ставимо прапорець
                break; 
            }
        }
        if (hasZero) {
            printf("%d ", i + 1);     //виводимо номер рядка
            found = 1;
        }
    }
    printf("\n\nРядки:\n");
    for (int i = 0; i < n; i++) {
        int hasZero = 0;

        for (int j = 0; j < m; j++) {    //перевіряємо рядок
            if (a[i][j] == 0) {
                hasZero = 1;
                break;
            }
        }
        if (hasZero) {
            for (int j = 0; j < m; j++) {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
    }
    if (!found) {
        printf("Немає рядків з нульовими елементами.\n");
    }

    return 0;
}
