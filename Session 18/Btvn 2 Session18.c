#include <stdio.h>
struct SinhVien{
	char fullName[100];
	int age;
	char phoneNumber[15];
};

int main(){
	struct SinhVien sv1;
	printf("Moi ban nhap ten sinh vien: ");
	fgets(sv1.fullName, sizeof(sv1.fullName), stdin);
	printf("Moi ban nhap tuoi sinh vien: ");
	scanf("%d", &sv1.age);
	fflush(stdin);
	printf("Moi ban nhap sdt sinh vien: ");
	fgets(sv1.phoneNumber, sizeof(sv1.phoneNumber), stdin);
	
	//In thong tin
	printf("\tBang thong tin\n");
	printf("\tTen cua sinh vien la: %s \tTuoi cua sinh vien la: %d\n \tSdt sinh vien: %s", sv1.fullName, sv1.age, sv1.phoneNumber);
	
	return 0;
}
