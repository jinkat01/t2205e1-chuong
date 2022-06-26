#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//int main (int argc, char *argv[]) {
	int pin,id;
	int inputpin,inputid;
	int dichvu;
	int nhaplai;
	char next;
	nhaplai=5;
	//user infor
	id=1001;
	pin=0000;
	int sodu=4000000;
	int ruttien;
	int xacnhanrut, xacnhanck;
	//user tranfer
	int inputidck;
	char inputnameck[50];
	int idck=1503;
	char nameck[50] = "nguyenkhacchuong";
	int ck, soduck;
	soduck=100000;
int main(){
	//login
do
{
	in4();
	printf("Nhap ma tai khoan: ");
	scanf("%d",&inputid);
	printf("Nhap ma pin: ");
	scanf("%d",&inputpin);
	if (inputpin==pin && inputid==id)
	{
		printf("Ban da dang nhap thanh cong\n");
		do
		{
			menu();
			scanf("%d",&dichvu);
			switch (dichvu)
			{
			case 1:
				system("cls");
				printf("Ban da chon chuc nang rut tien.\nSo tien rut la boi so cua 50.000\nSo tien rut khong qua 3.000.000/luot\n");
				do
				{
				printf("Nhap so tien muon rut:");
				scanf("%d",&ruttien);
				if (ruttien>3000000||ruttien%50000!=0||ruttien>sodu)
				printf("Vui long nhap lai so tien muon rut.So tien rut la boi so cua 50.000.\nSo tien rut khong qua 3.000.000/luot\n");
				else
				{
				printf("Ban chon rut %d.\nChon 1: Xac nhan\nChon 2: Nhap lai\n");
				scanf("%d",&xacnhanrut);
				if (xacnhanrut==1)
				sodu=sodu-ruttien;
				printf("So du hien tai cua ban la: %d",sodu);
				}
				}while (ruttien>3000000||ruttien%50000!=0||ruttien>sodu||xacnhanrut==2);
				
			break;
			case 2:
				
				system("cls");
				in4();
				printf("Ban da chon chuc nang chuyen tien\n");
				do
				{
				printf("nhap ID tai khoan nguoi nhan: ");
				scanf("%d",&inputidck);
				printf("nhap ten nguoi nhan (viet lien, khong dau): ");
				scanf("%s",&inputnameck);
				if(idck==inputidck&&strcmp(nameck,inputnameck)==0)
				{
					do 
					{
					printf("Nhap so tien muon chuyen: ");
					scanf("%d",&ck);
					if (ck>sodu)
					printf("So tien chuyen lon hon so du cua ban. Vui long nhap lai: ");
					else 
					printf("Ban muon chuyen so tien %d cho %s.\nChon 1: Xac nhan\nChon 2: Nhap lai\n",ck,inputnameck);
					scanf("%d",&xacnhanck);
					if (xacnhanck==1){
//					chuyenkhoan(sodu,soduck,ck);
					sodu=sodu-ck;
					soduck=soduck+ck;
					printf("Ban da chuyen thanh cong so tien %d den tai khoan %s\n",ck,inputnameck);
					printf("So du hien tai cua ban la: %d\n",sodu);
					printf("So du hien tai cua %s la %d\n",inputnameck,soduck );
					}
					}while(ck>sodu||xacnhanck!=1);
				}else 
				printf("Vui long nhap lai thong tin nguoi nhan\n");
				}while (idck!=inputidck||strcmp(nameck,inputnameck)!=0);
			break;
			case 3:
				system("cls");
				printf("ban da chon chuc nang xem so du\n");
				printf("So du cua ban la: %d",sodu);
			break;
			case 4:
				printf("Ban da thoat\nDang nhap lai de su dung tiep\n");
				system("cls");
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
int menu()
{	
	system("cls");
	in4();
	printf("Hay lua chon thao tac:\n1.Nhan 1: Rut tien\n2.Nhan 2: Chuyen tien\n3.Nhan 3: Xem so du\n4.Nhan 4: Thoat.\n");
	printf("Moi ban lua chon dich vu:\n");
	return 0;
}
int in4(){
printf("Ma tai khoan: 1001\nMa pin: 0000\nMa tai khoan nguoi nhan: 1503\nTen tai khoan nguoi nhan: nguyenkhacchuong\n===================================\n");
}
//int chuyenkhoan(sodu,soduck,ck)
//{
//	 sodu  =sodu - ck;
//	 soduck=soduck+ck;	 
//}
