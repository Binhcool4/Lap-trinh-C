#include <stdio.h>
int ucln(int x, int y) {
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

int main() {
    int x, y;
    printf("Nhap so thu nhat: ");
    scanf("%d", &x);
    printf("Nhap so so thu hai: ");
    scanf("%d", &y);

    int result = ucln(x, y);
    printf("UCLN cua %d va %d la: %d\n", x, y, result);

    return 0;
}

