#include <stdio.h>

int main() {
    int choice;

    do {
        printf("\n=== МЕНЮ ===\n");
        printf("1 - Виконати задачу\n");
        printf("0 - Вихід\n");
        printf("Ваш вибір: ");
        scanf("%d", &choice);

        if (choice == 1) {
            int n, m;

            printf("\nВведіть кількість рядків: ");
            scanf("%d", &n);
            printf("Введіть кількість стовпців: ");
            scanf("%d", &m);

            int a[n][m];

            printf("\nВведіть елементи матриці:\n");
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    printf("a[%d][%d] = ", i, j);
                    scanf("%d", &a[i][j]);
                }
            }
            printf("\nПочаткова матриця:\n");
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    printf("%4d", a[i][j]);
                }
                printf("\n");
            }
            int max = a[0][0];          // беремо перший елемент як максимальний
            int row = 0, col = 0;
                // Пошук максимального елемента
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    if (a[i][j] > max) {
                        max = a[i][j];
                        row = i;       // змінні для номера рядка і стовпця максимуму
                        col = j;
                    }
                }
            }
            printf("\nМаксимальний елемент: %d\n", max);
            printf("Його позиція: [%d][%d]\n", row, col);
            // Вивід нової матриці без рядка і стовпця
            printf("\nНова матриця:\n");

            for (int i = 0; i < n; i++) {
                if (i == row)
                    continue;

                for (int j = 0; j < m; j++) {
                    if (j == col)
                        continue;

                    printf("%4d", a[i][j]);
                }
                printf("\n");
            }
        }

    } while (choice != 0);

    return 0;
}
