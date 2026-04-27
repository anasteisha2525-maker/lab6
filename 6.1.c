#include <stdio.h>

int main() {
    int n = 3, m = 4;

    int A[3][4] = {
        {3, -2, 4, 9},
        {0, 3, 10, 3},
        {5, -4, -6, 0}
    };

    int hasZero[3] = {0}; // масив для збереження рядків з нулем
    for (int i = 0; i < n; i++) {             //цикл по рядках
        for (int j = 0; j < m; j++) {         //цикл по елементах рядка
            if (A[i][j] == 0) {               //якщо є 0
                hasZero[i] = 1;               //запамятали що в рядку є 0
                break;
            }
        }
    }
    printf("Номера рядків:\n");
    for (int i = 0; i < n; i++) {
        if (hasZero[i]) {
            printf("%d ", i + 1);
        }
    }
    printf("\nРядки:\n");
    for (int i = 0; i < n; i++) {
        if (hasZero[i]) {
            for (int j = 0; j < m; j++) {
                printf("%d ", A[i][j]);
            }
            printf("\n");                    // перехід на новий рядок після кожного рядка
        }
    }

    return 0;
}