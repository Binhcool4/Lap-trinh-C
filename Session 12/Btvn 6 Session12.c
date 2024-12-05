#include <stdio.h>
int isPerfectNumber(int n) {
    if (n <= 1){
    	return 0;
	} 

    int sum = 0;
    int i;
    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0) sum += i;
    }

    return sum == n;
}

void checkPerfectNumber(int num) {
    printf("%d %s la so hoan hao.\n", num, isPerfectNumber(num) ? "la" : "khong phai");
}

int main() {
    int num1, num2;

    printf("Nhap vao so nguyen thu nhat: ");
    scanf("%d", &num1);

    printf("Nhap vao so nguyen thu hai: ");
    scanf("%d", &num2);

    checkPerfectNumber(num1);
    checkPerfectNumber(num2);

    return 0;
}

