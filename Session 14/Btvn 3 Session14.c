#include <stdio.h>
int main() {
    char word[] = "Hello, World!";
    int i;
    int length = strlen(word);

    printf("Chuoi ki tu dao nguoc la: ");
	for ( i = length - 1; i>=0; i--) {
        printf("%c", word[i]);  
    }
 
    return 0;
}

