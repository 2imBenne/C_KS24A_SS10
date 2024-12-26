#include<stdio.h>
//linear search 
int main(){
	
	int arr[5]={3,9,7,2,-10};
	int size = sizeof(arr) / sizeof(arr[0]); 
	printf("Cac phan tu trong mang: \n") ;
	for(int i=0;i<size;i++){
		printf("%d\t",arr[i]); 
	} 
	
	printf("\n");
	int searchValue;
	printf("Moi nhap gia tri can tim kiem trong mang: ");
	scanf("%d",&searchValue); 
	for(int i =0;i< size;i++){
		if(searchValue == arr[i]){
			printf("Gia tri %d co ton tai trong mang va nam tai vi tri [%d] \n",searchValue,i) ;
			return 0; 
		} 
	} 
	printf("Gia tri %d khong ton tai trong mang ",searchValue); 
} 
