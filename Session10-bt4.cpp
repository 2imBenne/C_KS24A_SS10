#include <stdio.h>

int main() {
	
	int arr[]={54,100,23,97,56,62};
	int n= sizeof(arr) / sizeof(arr[0]);
		printf("before sort: \n") ;
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]); 
	} 
	for(int i =0 ;i <n-1; i++){
		int min= i; 
		for(int j=i+1 ;j < n;j++){
			if(arr[j] < arr[min]) {
				min = j; 
			}
		}
		int tmp = arr[min];
		arr[min]= arr[i] ;
		arr[i]= tmp; 
	} 
	printf("\nAfter sort: \n");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]); 
	} 
	printf("\n"); 
	return 0; 
}
