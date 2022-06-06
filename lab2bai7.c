#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float R,canhvuong, dai,rong;
	float Ptron,Pvuong,Phcn;
	float Stron,Svuong,Shcn;
	
	printf("Nhap ban kinh hinh tron: ");
	scanf("%f",&R);
	printf("Nhap chieu dai canh hinh vuong: ");
	scanf("%f",&canhvuong);
	printf("Nhap chieu dai hinh chu nhat: ");
	scanf("%f",&dai);
	printf("Nhap chieu rong hinh chu nhat: ");
	scanf("%f",&rong);
	
	Ptron= 3.14*2*R;
	Stron= 3.14*R*R;
	
	Pvuong=4*canhvuong;
	Svuong=canhvuong*canhvuong;
	
	Phcn=(dai+rong)*2;
	Shcn=dai*rong;
	
	printf("Chu vi va Dien tich hinh tron ban kinh %.2f la:\n",R);
	printf("Chu vi: %.2f\n",Ptron);
	printf("Dien tich: %.2f\n\n",Stron);
	printf("Chu vi va Dien tich hinh vuong canh %.2f la:\n",canhvuong);
	printf("Chu vi: %.2f\n",Pvuong);
	printf("Dien tich: %.2f\n\n",Svuong);
	printf("Chu vi va Dien tich hinh chu nhat chieu dai %.2f, chieu rong %.2f la:\n",dai,rong);
	printf("Chu vi: %.2f\n",Phcn);
	printf("Dien tich: %.2f\n",Shcn);
	return 0;
}
