#include <stdio.h>
void showArray(int *arr, int size);

int main(){
	int arr[] = {10, 11, 12, 13, 14, 15};
	int size = sizeof(arr)/sizeof(int);
	showArray(arr, size);
	
	return 0;
}
showArray(int *arr, int size){
	for(int i = 0; i<size; i++){
		printf("arr[%d] = %d\n", i, *(arr+i));
		
	}
	
}
