#include <stdio.h>
void calculateSum(int* a, int* b, int* result) {
    *result = *a + *b;  // Tinh tong cua a va b, luu vào bien result
}

int main() {
    int x = 7, y = 12;   
    int sum = 0;          

    calculateSum(&x, &y, &sum);

    printf("Tong cua %d va %d la: %d\n", x, y, sum);

    return 0;
}

