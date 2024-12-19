#include <stdio.h>
struct sinhVien {
    char name[100];
    int age;
    char phoneNumber[15];
};
int main() {
    struct sinhVien sv[5];
    for (int i = 0; i < 5; i++) {
        printf("\nNhap thong tin sinh vien %d:\n", i + 1);
        printf("Nhap ten: ");
        fflush(stdin);
        fgets(sv[i].name, sizeof(sv[i].name), stdin);
        printf("Nhap tuoi: ");
        scanf("%d", &sv[i].age);
        fflush(stdin);
        printf("Nhap so dien thoai: ");
        fgets(sv[i].phoneNumber, sizeof(sv[i].phoneNumber), stdin);
    }

    printf("\nThong tin cac sinh vien:\n");
    for (int i = 0; i < 5; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        printf("Ten: %s", sv[i].name);
        printf("Tuoi: %d\n", sv[i].age);
        printf("So dien thoai: %s\n", sv[i].phoneNumber);
    }
    return 0;
}

