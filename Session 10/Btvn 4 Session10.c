#include <stdio.h>
int main(){
	int arr[] = {5, 10, 15, 6, 12};
	int n = sizeof(arr)/sizeof(arr[0]);
	int i;
	int j;
	
	for(i = 0; i<n; i++){
		int key = arr[i];
		int j = i - 1;
		
		while(j >= 0 && arr[j] > key){
			arr[j+1] = arr[j];
			j = j-1;
		}
		arr[j + 1] = key;
	}
	printf("So nguyen to theo thu tu tang dan la : \n");
	for(i = 0; i < n; i++ ){
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	return 0;
}
