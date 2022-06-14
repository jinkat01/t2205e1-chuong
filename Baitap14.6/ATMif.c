#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int pin, ID;
	int inputpin, inputID;
	int dichvu;
	int thoat;
	
	pin=1123;
	ID=1000;
	
	printf("Nhap ID cua ban: ");
	scanf("%d",&inputID);
	printf("Nhap ma pin cua ban: ");
	scanf("%d",&inputpin);
	printf("pin %d, ID %d",pin, ID);
	if (inputpin==pin && inputID==ID)
	{
		printf("Menu:\nNhan 1: Rut tien.\nNhan 2: Chuyen tien.\nNhan3: Xem so du.\nNhan 4: Thoat\n");
		
		printf("Moi ban lua chon dich vu:\n");
		scanf("%d",&dichvu);
		if (dichvu==1)
		{
			printf("Ban da chon chuc nang Rut tien");
			}
		else if (dichvu==2)
		{
			printf("Ban da chon chuc nang Chuyen tien");
			}
			else if (dichvu==3)
		{
			printf("Ban da chon chuc nang Xem so du");
			}
				else if (dichvu==4)
		{
			printf("Ban da thoat tai khoan");
			
		}
		
}
		else { printf("Thong tin nhap vao khong dung");}
	return 0;
}
