#include <stdio.h>
#include <string.h>

struct SinhVien{
	int id;
	char fullName[50];
	int age;
	char numberPhone[15];
};
int main(){
	struct SinhVien sv[50] = {
		{1, "Nguyen Van A",20,"0325321298"},
        {2, "Nguyen Van B",26,"0123456789"},
        {3, "Nguyen Thi C",24,"0987654321"},
        {4, "Nguyen Thi D",32,"066771508"},
        {5, "Le Thi E",45,"077668805"}
	};
	int n=5;
	int newId;
	
	
	printf("Moi ban nhap Id sinh vien moi: ");
	scanf("%d", &newId);
	getchar();
	sv[n].id = newId;
	
	printf("Moi ban nhap ten sinh vien moi: ");
	fgets(sv[n].fullName, sizeof(sv[n].fullName), stdin);
	sv[n].fullName[strcspn(sv[n].fullName, "\n")] = '\0';
	
	printf("Nhap tuoi sinh vien moi: ");
    scanf("%d", &sv[n].age);
    getchar(); 
    
    printf("Nhap so dien thoai sinh vien moi: ");
    fgets(sv[n].numberPhone, sizeof(sv[n].numberPhone), stdin);
    sv[n].numberPhone[strcspn(sv[n].numberPhone, "\n")] = '\0';

    n++;
    
    printf("\nThong tin tat ca sinh vien:\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d\n", sv[i].id);
        printf("Ten: %s\n", sv[i].fullName);
        printf("Tuoi: %d\n", sv[i].age);
        printf("So dien thoai: %s\n\n", sv[i].numberPhone);
    }
    
	
	
	return 0;
}

