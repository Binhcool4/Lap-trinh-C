#include <stdio.h>
int main(){
	FILE *fptr;
	char write[100];
	fptr = fopen("bt01.txt", "a");
	
	printf("Moi ban nhap vao mot chuoi: ");
	fgets(write, 100, stdin);
	fprintf(fptr, "%s", write);
	fclose(fptr);
	
	return 0;
}
