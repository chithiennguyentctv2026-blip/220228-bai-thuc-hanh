#include<stdio.h>
int main(){
	int n,temp,dao=0,tong=0;
	printf("Nhap so:");
	scanf("%d",&n);
	temp=n;
	while (temp>0){
		int chuso = temp%10;
		dao = dao*10*chuso;
		tong=tong+chuso;
		temp=temp/10;
	}
	printf("So dao nguoc=%d\n",dao);
	printf("Tong cac chu so=%d",tong);
	return 0;
}
