#include <stdio.h>
#include <string.h>
int main(){
	char text[] = "fhH13@13!ff";
	int countCharacterText = 0;
	int countCharacterNum = 0;
	int countCharacterSpecial = 0;
	int length = strlen(text);
	int i;
	for(i = 0; i<length; i++){
		if(isalpha(text[i])){
			countCharacterText++;
		}else if(isdigit(text[i])){
			countCharacterNum++;
		}else{
			countCharacterSpecial++;
		}
		
	}
	printf("%d ki tu chu cai \n",countCharacterText); //5
	printf("%d ki tu chu so \n",countCharacterNum); //4
	printf("%d ki tu chu cai dac biet \n",countCharacterSpecial); //2
	
	return 0;
}
