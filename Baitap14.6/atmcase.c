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
		switch(dichvu)
		{
			case 1:
				printf("ban da chon chuc nang rut tien");
				break;
			case 2:
				printf("ban da chon chuc nang chuyen tien");
				break;
			case 3:
				printf("ban da chon chuc nang xem so du");
				break;
			case 4:
				printf("Ban da thoat tai khoan");
				break;
		}
		
}
		else { printf("Thong tin nhap vao khong dung");}
	return 0;
}
