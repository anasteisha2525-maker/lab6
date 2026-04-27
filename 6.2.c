#include <stdio.h>

int main() {
    int n, m;

    printf("Введіть n і m: ");
    scanf("%d %d", &n, &m);

    if (n <= 0 || m <= 0) {
        printf("Помилка: некоректні розміри\n");
        return 1;
    }

    int A[100][100];                // задаємо максимум, щоб можна було вводити різні розміри

    printf("Введіть матрицю:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &A[i][j]);
        }
    }
       //шукаємо максимальне
    int max = A[0][0];              
    int row = 0, col = 0;           // тут будемо зберігати позицію максимуму
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i][j] > max) {
                max = A[i][j];
                row = i;
                col = j;
            }
        }
    }

    printf("Макс = %d (рядок %d, стовпець %d)\n", max, row + 1, col + 1);

    printf("Результат:\n");
    // вивід матриці без потрібного рядка і стовпця
    for (int i = 0; i < n; i++) {
        if (i == row) continue;

        for (int j = 0; j < m; j++) {
            if (j == col) continue;

            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}