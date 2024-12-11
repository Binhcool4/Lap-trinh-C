#include <stdio.h>
int main(){
	char word[100];
	printf("Moi ban nhap chuoi ki tu: ");
	fgets(word, sizeof(word), stdin);
	
	word[strcspn(word, "\n")] = '\0';
	int length = strlen(word);
	printf("Chuoi ki tu ban vua nhap la: %s\n", word);
	printf("Do dai chuoi ki tu vua nhap la: %d\n", length);
	
	return 0;
}
