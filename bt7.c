#include<stdio.h>
int main(){
	int n,i=1;
	long long S=1;
	printf("Nhap n:");
	scanf("%d",&n);
	while(i<=n){
		S=S*i;i++;
	}
	printf("Giai thua =%lld",S);
	return 0;
}
