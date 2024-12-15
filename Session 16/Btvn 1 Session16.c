#include <stdio.h>
int main() {
    int x = 44;
	printf("Gia tri cua x: %d\n", x);
	printf("Dia chi cua x: %d\n", &x);
	    
    int *ptr = &x;  
	printf("Gia tri cua ptr: %d\n", *ptr);
    printf("Dia chi cua ptr: %d\n",  ptr);
    return 0;
}

