#include<stdio.h>
int main(){
	int n,i=1,S=0;
	printf("Nhap n:");
	scanf("%d,&n");
	while(i<=n){
		S=S+i;
		i++;
	}
	printf("Tong S= %d",S);
	return 0;
}
