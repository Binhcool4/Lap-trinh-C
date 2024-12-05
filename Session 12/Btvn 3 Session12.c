#include <stdio.h>

long long factorial(int n) {
    if (n < 0) {
        return -1;
    }
    
    long long result = 1;
    int i;
    for (i = 1; i <= n; i++) {
        result *= i;  
    }
    return result;
}

int main() {
    int number;
    
    printf("Nhap mot so nguyen: ");
    scanf("%d", &number);
    
    long long result = factorial(number);
    if (result == -1) {
        printf("Giai thua khong xac dinh voi so am.\n");
    } else {
        printf("Giai thua cua %d la: %lld\n", number, result);
    }
    
    return 0;
}

