#include <stdio.h>
int main(){
	char text[] = "xin chao sinh vien";
	int size = strlen(text);
	int i;
	for(i=0; i<size; i++){
		if(i==0 || text[i-1] == ' '){
			if(text[i] >= 'a' && text[i] <= 'z'){
				text[i] = toupper(text[i]);
			}
		}
	}
	printf("%s", &text);
	
	return 0;
}
