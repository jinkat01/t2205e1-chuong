#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float toan,ly,hoa;
	float tong,trungbinh;
	
	printf("nhap diem toan: ");
	scanf("%f",&toan);
	printf("nhap diem ly: ");
	scanf("%f",&ly);
	printf("nhap diem hoa: ");
	scanf("%f",&hoa);
	
	tong=toan+ly+hoa;
	trungbinh=tong/3;
	
	printf("Tong 3 mon toan, ly hoa la: %.2f\n", tong);
	printf("diem trung binh cac mon hoc la: %.2f\n",trungbinh);
		return 0;
}
