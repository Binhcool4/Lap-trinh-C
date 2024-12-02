#include <stdio.h>

int main() {
	int i;
	int j;
    int n;
    printf("Nhap kich thuoc mang: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Nhap cac phan tu mang:\n");
    for (i = 0; i < n; i++){
    	printf("Mang [%d] : ", i);
    	scanf("%d", &arr[i]);
	} 

    // Sap xep mang su dung Bubble Sort
    for ( i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1]) { 
                int temp = arr[j]; 
				arr[j] = arr[j + 1]; 
				arr[j + 1] = temp; 
            }

    printf("Mang sau khi sap xep:\n");
    for ( i = 0; i < n; i++){
    	printf("%d ", arr[i]);
	} 

    int x;
    printf("\nNhap so can tim: ");
    scanf("%d", &x);
    
    // Tim kiem 
    int found = -1;
    for ( i = 0; i < n; i++) {
        if (arr[i] == x) {
            found = i;
            break;
        }
    }

    if (found != -1) 
        printf("Phan tu %d tim thay tai vi tri %d.\n", x, found);
    else 
        printf("Khong tim thay phan tu %d.\n", x);

    return 0;
}

