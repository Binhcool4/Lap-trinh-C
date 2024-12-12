#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "hello world"; 
    char letter;
    int i, j = 0;
    
    
    printf("Chuo ban dau: %s\n", str);
    
    printf("Nhap vao mot ky tu can xoa: ");
    scanf("%c", &letter);
    
    for(i = 0; i < strlen(str); i++) {
        if(str[i] != letter) {
            str[j++] = str[i];
        }
    }
    
    str[j] = '\0';
    
    printf("Chuoi sau khi xoa ky tu '%c': %s\n", letter, str);
    
    return 0;
}

