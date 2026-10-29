#include<stdio.h>
int main(){
	int n,i=2,dem=0;
	printf("Nhap n:");
	scanf("%d",&n);
	while (i<=n){
		if(n%i==0){
			dem++;
		}
		i++;
	}
	if (n<2){
		printf("khong phai so nguyen to");
	}else if(dem==0){
		printf("la so nguyen to");
	} else{
		printf("khong phai la so nguyen to");
	}
	return 0;
}
