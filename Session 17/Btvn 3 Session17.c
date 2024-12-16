#include <stdio.h>
#include <string.h>
#include <ctype.h>
void menu(){
	printf("\n--------------------MENU--------------------\n");
	printf("1. Nhap vao chuoi\n");
    printf("2. Dao nguoc chuoi\n");
    printf("3. Dem so luong tu trong chuoi\n");
    printf("4. Nhap vao chuoi khac va so sanh voi chuoi ban dau\n");
    printf("5. In hoa tat ca cac tu trong chuoi\n");
    printf("6. Nhap vao chuoi khac va them vao chuoi ban dau\n");
    printf("7. Thoat\n");
}
int addArray(char *arr, int *length);
void reverseArray(char *arr, char *reverseArray);
void countCharacter(char *arr);
void compareString(char *arr);
void upperCaseString(char *arr);
void connectString(char *arr);

int main() {
    int length;
    int choice;
    char arr[100], reverseArr[100];
    
    do{
        menu();
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        getchar();
        switch (choice) {
            case 1:
                addArray(arr, &length);
                break;
            case 2:
                reverseArray(arr, reverseArr);
                break;
            case 3:
                countCharacter(arr);
                break;
            case 4:
                compareString(arr);
                break;
            case 5:
                upperCaseString(arr);
                break;
            case 6:
                connectString(arr);
                break;
            case 7:
                break;
        }
    } 
    while (choice != 7);
}

int addArray(char *arr, int *length) {
    printf("Nhap vao mang: ");
    fgets(arr, 100, stdin);
    fflush(stdin);
    *length = strlen(arr);
    return 0;
}

void reverseArray(char *arr, char *reverseArr) {
    int length = strlen(arr);
    for (int i = 0; i < length; i++) {
        reverseArr[i] = arr[length - 1 - i];
    }
    reverseArr[length] = '\0';
    for (int i = 0; i < length; i++) {
        arr[i]=reverseArr[i];
    }
    printf("chuoi dao nguoc la: %s\n", reverseArr);
}

void countCharacter(char *arr) {
    int count=1;
    for (int i = 0; i < strlen(arr); i++) {
        if (arr[i]==' ') {
            count++;
        }
    }
    printf("So tu trong chuoi la: %d\n", count);
}

void compareString(char *arr) {
    char compareArr[100];
    printf("Nhap vao chuoi khac: ");
    fgets(compareArr, 100, stdin);
    fflush(stdin);
    if (strcmp(arr, compareArr) == 0) {
        printf("hai chuoi giong nhau\n");
    } 
    else {
        printf("Hai chuuoi khac nhau\n");
    }
}

void upperCaseString(char *arr) {
    for (int i = 0; i < strlen(arr); i++) {
        arr[i] = toupper(arr[i]);
    }
    printf("Chuoi sau khi in hoa: %s\n", arr);
}

void connectString(char *arr) {
    char connectArr[100];
    printf("Nhap vao chuoi khac de them: ");
    fgets(connectArr, 100, stdin);
    fflush(stdin);
    strcat(arr, connectArr);
    printf("Chuoi sau khi duoc noi vao: %s\n", arr);
}
