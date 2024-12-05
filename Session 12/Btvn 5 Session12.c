#include <stdio.h>
int isPrime(int n) {
    if (n <= 1){
    	return 0;
	}    
    int i;
    for (i = 2; i * i <= n; i++) {  
        if (n % i == 0) return 0;  
    }

    return 1;  
}

int main() {
    int num1, num2;

    printf("Nhap vao so nguyen thu nhat: ");
    scanf("%d", &num1);

    printf("Nhap vao so nguyen thu hai: ");
    scanf("%d", &num2);

    printf("%d %s la so nguyen to.\n", num1, isPrime(num1) ? "la" : "khong phai");
    printf("%d %s la so nguyen to.\n", num2, isPrime(num2) ? "la" : "khong phai");

    return 0;
}

