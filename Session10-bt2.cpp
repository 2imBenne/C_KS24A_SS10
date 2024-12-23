#include <stdio.h>

int main() {
    int a[] = {70, 92, 81, 18, 4, 9, 69};
    int n = sizeof(a) / sizeof(a[0]);
	printf("Before bubble sort: \n"); 
	for(int i=0;i<n;i++){
		printf("%d ",a[i]); 
	} 
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("\nAfter bubble sort: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

