#include <stdio.h>
#include <locale.h>
#define m 4
#define n 4
int main() {

    int i, j;//���� ��� ���������
    int A[m][n];// ����� 

    setlocale(LC_ALL, "ukr");// ������������ ����������
    
    // �������� ������������ �������� 
    printf("����i�� �������� ��������� ������i %dx%d:\n", m, n);
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("����i�� A[%i][%i]=", i, j);
            scanf_s("%d", &A[i][j]);
        }
    }
    printf("\n");
    // ��������� �������� ������
    printf("����� A");
    printf("\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            printf(" %d", A[i][j]);
        printf("\n");
    }
    // ����� max
    // ������� ���� �� �������� �����
    for (i = 0; i < m; i++) {
         int max = A[i][0];
        // �������� ���� �� �������� ���������
        for (j = 0; j < n; j++) {
            if (max < A[i][j]) {
                max = A[i][j];
            }
        }
        printf("��� ����� %d max=%d \n", i + 1, max);// ��������� ����������
    }

    return 0;
}
