#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float top,bottom,height;
	float Sht;
	
	printf("Nhap chieu dai day nho: ");
	scanf("%f",&top);
	printf("Nhap chieu dai day lon: ");
	scanf("%f",&bottom);
	printf("Nhap chieu cao: ");
	scanf("%f", &height);
	
	Sht=(top+bottom)*height/2;
	
	printf("Dien tich hinh thang la: %.2f",Sht);
	return 0;
}
