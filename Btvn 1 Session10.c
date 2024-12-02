#include <stdio.h>
int main(){
	int array[5] = {10, 20, 30, 40, 50};
	int num;
	int find = 0;
	int i;
	
	printf("Moi ban nhap so phan tu can tim : ");
	scanf("%d", &num);
	
	for(i = 0; i < sizeof(array)/sizeof(int); i++){
		if(array[i] == num){
			printf("Vi tri phan tu co trong mang la : %d ", i);
			find = 1;
		}
		
	}
	
	 if(find == 0){
        printf("Phan tu khong ton tai trong mang.\n");
    }
	
	return 0;
}
