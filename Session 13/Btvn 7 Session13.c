#include <stdio.h>
void taoMaTran(int row, int column, int maTran[row][column]) {
	int i;
	int j;
    for ( i = 0; i < row; i++) {
        for ( j = 0; j < column; j++) {
            printf("Nhap gia tri cho ma tran [%d][%d]: ", i, j);
            scanf("%d", &maTran[i][j]);
        }
    }
}

int main() {
	int i;
	int j;
    int row, column;
    printf("Nhap so hang: ");
    scanf("%d", &row);
    printf("Nhap so cot: ");
    scanf("%d", &column);

    int maTran[row][column];
    
    taoMaTran(row, column, maTran);
    
    printf("Ma tran vua nhap la:\n");
    for ( i = 0; i < row; i++) {
        for ( j = 0; j < column; j++) {
            printf("%d ", maTran[i][j]);
        }
        printf("\n");
    }

    return 0;
}

