#include <stdio.h>
int main(){
    int n, m;
    printf("Nhap so dong: ");
    scanf("%d", &n);
    printf("Nhap so cot: ");
    scanf("%d", &m);
    
    int i;
    int j;
    
    int arr[n][m];
    printf("Nhap cac phan tu cho mang 2 chieu:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Mang truoc khi sap xep:\n");
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int z;
    for ( i = 0; i < m; i++) {
        for ( j = 0; j < n ; j++) {
            for ( z = 0; z < n - j - 1; z++) {
                if (arr[z][i] > arr[z + 1][i]) {
                    int temp = arr[z][i];
                    arr[z][i] = arr[z + 1][i];
                    arr[z + 1][i] = temp;
                }
            }
        }
    }
    printf("Mang sau khi sap xep:\n");
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

