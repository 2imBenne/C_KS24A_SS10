#include <stdio.h>

int main() {
    int a[] = {10, 72, 69, 43, 37, 100, 23};
    int n = sizeof(a) / sizeof(a[0]); 
    printf("Before insertion sort: \n"); 
	for(int i=0;i<n;i++){
		printf("%d ",a[i]); 
	} 
    for (int i = 1; i < n; i++) {
        int value = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > value) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = value;
    }
    printf("\nAfter insertion sort: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

