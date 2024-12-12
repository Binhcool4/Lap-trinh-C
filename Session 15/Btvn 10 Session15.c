#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "bcdac";
    int count[256] = {0};  
    int i;

    for( i = 0; i < strlen(str); i++) {
        count[str[i]]++;
    }
    
    for(int i = 0; i < 256; i++) {
        if(count[i] > 0) {
            printf("%c: %d\n", i, count[i]);
        }
    }
    
    return 0;
}

