#include <stdio.h>
#include <ctype.h>
void menu() {
    printf("\n--------------------MENU--------------------\n");
    printf("1. Nhap vao chuoi\n");
    printf("2. In ra chuoi\n");
    printf("3. Dem so luong chu cai trong chuoi\n");
    printf("4. Dem so luong chu so trong chuoi\n");
    printf("5. Dem so luong ky tu dac biet trong chuoi\n");
    printf("6. Thoat\n");
}

// Case 1
void addString(char *str) {
    printf("Nhap vao chuoi: ");
    getchar(); // Xóa ký t? newline còn sót l?i trong b? d?m sau scanf
    fgets(str, 100, stdin); // Ð?c chu?i
}

// Case 2
void showString(char *str) {
    printf("Chuoi da nhap: %s\n", str);
}

// Case 3
int countLetters(char *str) {
    int count = 0;
    while (*str != '\0') {
        if (isalpha(*str)) {
            count++;
        }
        str++;
    }
    return count;
}

// Case 4
int countDigits(char *str) {
    int count = 0;
    while (*str != '\0') {
        if (isdigit(*str)) {
            count++;
        }
        str++;
    }
    return count;
}

// Case 5
int countSpecial(char *str) {
    int count = 0;
    while (*str != '\0') {
        if (!isalpha(*str) && !isdigit(*str) && *str != ' ' && *str != '\n') {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char str[100];  
    int choice;
    
    do {
        menu(); 
        printf("Lua chon cua ban: ");
        scanf("%d", &choice); 
        
        switch (choice) {
            case 1:
                addString(str); 
                break;
            case 2:
                showString(str); 
                break;
            case 3:
                printf("So luong chu cai trong chuoi: %d\n", countLetters(str)); 
                break;
            case 4:
                printf("So luong chu so trong chuoi: %d\n", countDigits(str)); 
                break;
            case 5:
                printf("So luong ky tu dac biet trong chuoi: %d\n", countSpecial(str)); 
                break;
            case 6:
                printf("Thoat chuong trinh\n"); // Thoát chuong trình
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n"); 
        }
    } while (choice != 6); 

    return 0;
}

