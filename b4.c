#include <stdio.h>
int main(){
	int n, i=1, s=0;
	printf("Nhap n:");
	scanf("%d", &n);
	while (i<=n){
		s=s+i;
		i=i+2;
    }
	printf("Tong cac so le s = %d", s);
	return 0;
}
