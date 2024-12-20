#include <stdio.h>
#include <string.h>

struct sinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};
int main() {
    struct sinhVien sv[50] = {
        {1, "Nguyen Van A",20,"0325321298"},
        {2, "Nguyen Van B",26,"0123456789"},
        {3, "Nguyen Thi C",24,"0987654321"},
        {4, "Nguyen Thi D",32,"066771508"},
        {5, "Le Thi E",45,"077668805"}
    };
    int n = 5;
    int searchId, found = 0;
    printf("Nhap ID sinh vien can sua: ");
    scanf("%d", &searchId);
    for (int i = 0; i < n; i++) {
        if (sv[i].id == searchId) {
            found = 1;
            printf("Nhap ten moi: ");
            fflush(stdin);
            fgets(sv[i].name, sizeof(sv[i].name), stdin);
            printf("Nhap tuoi moi: ");
            scanf("%d", &sv[i].age);
            break;
        }
    }
    if (found==0) {
        printf("Khong tim thay sinh vien voi ID %d.\n", searchId);
    }
    printf("\nThong tin tat ca sinh vien:\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d\n", sv[i].id);
        printf("Ten: %s\n", sv[i].name);
        printf("Tuoi: %d\n", sv[i].age);
        printf("So dien thoai: %s\n\n", sv[i].phoneNumber);
    }
    return 0;
}
