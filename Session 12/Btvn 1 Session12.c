#include <stdio.h>
int tinhTong(int a, int b){
	return a + b;
	}
		
int main(){
	int num1, num2, tong;	
	printf("Moi ban nhap so thu nhat : ");
	scanf("%d", &num1);
	printf("Moi ban nhap so thu hai : ");
	scanf("%d", &num2);
		
	tong = tinhTong(num1, num2);
		
	printf("Tong cua so %d va so %d = %d", num1, num2, tong);
		
	return 0;
}
