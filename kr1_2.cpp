#include <stdio.h>
#include <locale.h>
#define m 4
#define n 4
int main() {

    int i, j;//змінні для лічильника
    int A[m][n];// масив 

    setlocale(LC_ALL, "ukr");// встановлення локалізації
    
    // введення користувачев елементів 
    printf("Введiть елементи квадратної матрицi %dx%d:\n", m, n);
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("Введiть A[%i][%i]=", i, j);
            scanf_s("%d", &A[i][j]);
        }
    }
    printf("\n");
    // Виведення вхідного масиву
    printf("Масив A");
    printf("\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            printf(" %d", A[i][j]);
        printf("\n");
    }
    // пошук max
    // Зовнішній цикл за індексом рядка
    for (i = 0; i < m; i++) {
         int max = A[i][0];
        // Внутрішній цикл за індексом стовпчика
        for (j = 0; j < n; j++) {
            if (max < A[i][j]) {
                max = A[i][j];
            }
        }
        printf("Для рядка %d max=%d \n", i + 1, max);// виведення результату
    }

    return 0;
}
