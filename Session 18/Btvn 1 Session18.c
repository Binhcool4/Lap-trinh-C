#include <stdio.h>
struct SinhVien{
	char fullName[100];
	int age;
	char phoneNumber[15];
};

int main(){
	struct SinhVien sv1 = {"Nguyen Van A", 18, "0999162006"};
	printf("Ten cua sinh vien: %s\n", sv1.fullName);
	printf("Tuoi cua sinh vien: %d\n", sv1.age);
	printf("So dien thoai: %s\n", sv1.phoneNumber);
	
	return 0;
}
