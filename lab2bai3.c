#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float num1,num2;
	int tong,hieu,tich;
	float thuong;
	
	printf("nhap so thu 1: ");
	scanf("%f",&num1);
	printf("nhap so thu 2: ");
	scanf("%f",&num2);
	tong=num1+num2;
	if (num1>num2)
	{
		hieu=num1-num2;
	}
	else {
		hieu=num2-num1;
		}
	tich=num1*num2;
	thuong=num1/num2;
	printf("Tong 2 so la: %d\n",tong);
	printf("hieu 2 so la: %d\n",hieu);
	printf("tich 2 so la: %d\n",tich);
	printf("thuong 2 so la: %.2f\n",thuong);
	return 0;
}
