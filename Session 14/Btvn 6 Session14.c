#include <stdio.h>

int main() {
    char str[] = "pizza rat ngon"; 
    int count = 0;
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        // Kiem tra co phai chu cai khong
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            count++;
        }
    }
    
    printf("%s\n", str);
    printf("So luong ky tu la chu cai: %d\n", count);

    return 0;
}

