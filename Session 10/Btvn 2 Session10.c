#include <stdio.h>
int main(){
	int arr[] = {10, 34, 20, 40, 90, 60};
	int n = sizeof(arr)/sizeof(arr[0]);
	int i;
	int j;
	
	for(i = 0; i < n; i++ ){
		for(j = 0; j<n-i-1; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			
		}
			
	}
	
	printf("So nguyen to theo thu tu tang dan la : \n");
	for(i = 0; i < n; i++ ){
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	return 0;
}
