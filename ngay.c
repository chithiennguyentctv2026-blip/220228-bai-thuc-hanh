#include<stdio.h>

int main(){
	int n;
	
	printf("Nhap so tu 1 den 7:" );
		scanf("%d",&n);
		
		switch(n) {
			case 1:
			printf("Chu Nhat");
			break;
		case 2:
		    printf("Thu hai");
			break;
		case 3:
		    printf("Thu ba");
			break;	
		case 4:
		    printf("Thu tu");
			break;
		case 5:
		    printf("Thu nam");
			break;	
		case 6:
		    printf("Thu sau");
			break;	
		case 7:
		    printf("Thu bay");
			break;
			default:
			printf("Nhap sai");	
		}
}

