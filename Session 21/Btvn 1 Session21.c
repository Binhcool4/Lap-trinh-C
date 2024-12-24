#include <stdio.h>
int main(){
	FILE *fptr;
	fptr = fopen("bt01.txt", "w");
	fprintf(fptr, " Hello Trieu Quoc Binh ");
	
	return 0;
}
