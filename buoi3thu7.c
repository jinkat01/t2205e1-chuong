#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float lt,th,btl;
	float plt,pth,pbtl,pnghihoc;
	int nghihoc,buoihoc;
	printf("Nhap so buoi hoc: ");
	scanf("%d",&buoihoc);
	printf("nhap so buoi nghi hoc: \n");
	scanf("%d", &nghihoc);
	pnghihoc=nghihoc*100/buoihoc;

	if(pnghihoc>25)
	{
//	printf("Ty le nghi hoc cua ban la: %f %",pnghihoc);
	printf("Ban khong du dieu kien thi.");
		}
	else {
			printf("nhap diem ly thuyet: ");
			scanf("%f", &lt);
			printf("nhap diem thuc hanh: ");
			scanf("%f", &th);
			printf("nhap diem bai tap lon: ");
			scanf("%f", &btl);
			plt=lt*100/20;
			pth=th*100/15;
			pbtl=btl*100/10;
	// xet diem bai tap
				//LT
				if (plt>40) {
					printf("Diem Ly Thuyet la : %f, Qua mon \n", lt);
				}
				else { printf("Diem Ly Thuyet la : %f, Thi Lai\n", lt);
				}
				//TH
				if (pth>40) {
					printf("Diem Thuc hanh la : %f, Qua mon\n", th);
				}
				else { printf("Diem Thuc hanh la : %f, Thi Lai\n", th);
				}
				//BTL
				if (pbtl>40) {
					printf("Diem Bai tap lon la : %f, Qua mon \n", btl);
				}
				else { printf("Diem Bai tap lon la : %f, Thi Lai\n", btl);
				}
		}
	return 0;
}
