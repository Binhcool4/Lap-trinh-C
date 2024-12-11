#include <stdio.h>
int main() {
    char word[] = "hello world"; 
    char letter; 
    int count = 0;
    printf("%s\n", word);
    printf("Nhap vao mot ky: ");
    scanf("%c", &letter);
    int i;
    for (i = 0; word[i] != '\0'; i++) {
        if (word[i] == letter) {
            count++;
        }
    }

    printf("Ky tu '%c' xuat hien %d lan trong chuoi.\n", letter, count);

    return 0;
}

