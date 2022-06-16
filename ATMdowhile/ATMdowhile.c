#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int pin,id;
	int inputpin,inputid;
	int dichvu;
	int nhaplai;
	char next;
	nhaplai=5;
	id=1001;
	pin=0000;
	//login
do
{
	printf("Nhap ma id: ");
	scanf("%d",&inputid);
	printf("Nhap ma pin: ");
	scanf("%d",&inputpin);
	if (inputpin==pin && inputid==id)
	{
		printf("Ban da dang nhap thanh cong\n");
		do
		{
			printf("hay lua chon thao tac:\n1.Nhan 1: Rut tien\n2.Nhan 2: Chuyen tien\n3.Nhan 3: Xem so du\n4.Nhan 4: Thoat.\n");
			printf("Moi ban lua chon dich vu:\n");
			scanf("%d",&dichvu);
			switch (dichvu)
			{
				case 1:
				printf("Ban da chon chuc nang rut tien\n");
				break;
				case 2:
				printf("Ban da chon chuc nang chuyen tien\n");
				break;
				case 3:
				printf("ban da chon chuc nang xem so du\n");
				break;
				case 4:
				printf("Ban da thoat\nDang nhap lai\n");
				break;
			}
			if(dichvu!=4)
			{
			printf("Ban co muon su dung tiep khong?\nCo: Nhan phim c\nKhong: nhan phim k\n");
			fflush(stdin); 
			scanf("%c",&next);
			}
			}while (next=='c'||next=='C'&&dichvu!=4);
			nhaplai=5;
	}
	else
		{
		nhaplai=nhaplai-1;
		printf("Ban da nhap sai. ban con %d nhap lai\n",nhaplai);
		if (nhaplai==0)
		printf("Ban khong the dang nhap tiep");
		}	
}while (nhaplai!=0);
		
	return 0;
}
