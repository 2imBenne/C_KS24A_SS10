#include <stdio.h>

int main() {
    int a[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n = sizeof(a) / sizeof(a[0]); 
	printf("Day la toan bo gia tri co trong mang: \n");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]); 
	} 
    int check;
    printf("\nMoi nhap vao phan tu can kiem tra: ");
    scanf("%d", &check);

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == check) {
            printf("Phan tu %d co ton tai va nam o vi tri thu [%d] cua mang.\n", check, i+1);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Phan tu vua nhap khong ton tai trong mang.\n", check);
    }

    return 0;
}

