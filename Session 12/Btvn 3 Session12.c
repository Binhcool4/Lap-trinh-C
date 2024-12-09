#include <stdio.h>
int factorial(int n){
    int result = 1;
    int i;
    for (i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
int main(){
    int num;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &num);
    int result = factorial(num);
    printf("Giai thua cua %d la %d\n", num, result);
    return 0;
}

