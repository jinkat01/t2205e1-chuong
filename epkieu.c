#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float TB;
	int vote,cnt,tong,luotvote;
	cnt=1;
	tong=0;
	printf("Nhap so luot vote: ");
	scanf("%d",&luotvote);
	
	while (cnt<=luotvote)
	{
		printf("Nhap so diem vote lan %d: ", cnt);
		scanf("%d",&vote);
		tong=tong+vote;
		cnt=cnt+1;
		}
		TB=(float)tong/luotvote;
		printf("Diem vote trung binh la: %.2f",TB);
	return 0;
}
