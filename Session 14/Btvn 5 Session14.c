#include <stdio.h>

int main() {
    char str[] = "hello world";
    int count = 0;
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        while (str[i] == ' ') { //Bo qua ki tu khoang trang
            i++;
        }

        if (str[i] != '\0' && str[i] != ' ') {//Neu ko gap khoang trang se bat dau
            count++;
            while (str[i] != '\0' && str[i] != ' ') {
                i++;
            }
        }
    }
    
    printf("%s\n", str);
    printf("So phan tu trong chuoi la: %d\n", count);

    return 0;
}

