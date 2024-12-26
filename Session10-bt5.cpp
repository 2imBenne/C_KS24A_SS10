#include <stdio.h>

int binary_search(int a[],int n,int x){
	
	int l = 0, r = n - 1;
	while(l <= r){
    int m = (l + r) / 2;
    if(a[m] == x){
        return 1;
    }
    else if(a[m] < x){
        l = m + 1;
    }
    else{
        r = m - 1;
    }
}
return 0;
}

int main(){
    int n = 12, x = 24, y = 6;
    int a[12] = {1, 2, 3, 4, 5, 5, 7, 9, 13, 24, 27, 28};
    if(binary_search(a, n, x)){
        printf("FOUND\n");
    }
    else printf("NOT FOUND\n");
    if(binary_search(a, n, y)){
        printf("FOUND\n");
    }
    else printf("NOT FOUND\n");
    return 0;
}


