#include <stdio.h>
int main(){
	int arr[] = {46, 26, 14, 24, 10};
	int n = sizeof(arr)/sizeof(arr[0]);
	int i;
	int j;
	
	for (i = 0; i < n - 1; i++) {
		int min_idx = i;
		for (j = i + 1; j < n; j++) {
		    if (arr[j] < arr[min_idx]) {
		    min_idx = j;
		}
	}
		int temp = arr[min_idx];
		arr[min_idx] = arr[i];
		arr[i] = temp;
	
	 }
	
	
		printf("So nguyen to theo thu tu tang dan la : \n");
		for ( i = 0; i < n; i++) {
		    printf("%d ", arr[i]);
		}
		printf("\n");
		
	return 0;
}

