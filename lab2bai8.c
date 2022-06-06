#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	float b;
	double c;
	char d;
	long int e;
	long double f;
	a=14;
	b=12.345;
	c=12.12134677;
	d='C';
	
	printf("*========= Kich thuoc cua cac kieu du lieu ========*/\n\n");
	printf("	Kieu int: %d Bytes\n",sizeof(a));
	printf("	So nguyen: %d",a);
	
	printf("\n\n	Kieu float: %d Bytes",sizeof(b));
	printf("\n	So thuc kieu float: %f",b);
	
	printf("\n\n	Kieu double: %d Bytes",sizeof(c));
	printf("\n	So thuc kieu double: %.10f",c);
	
	printf("\n\n	Kieu char: %d Bytes",sizeof(d));
	printf("\n	Ky tu: %c",d);
	
	printf("\n\n	Kieu long int: %d Bytes",sizeof(e));
	printf("\n\n	Kieu long double: %d Bytes", sizeof(f));
	printf("\n/*================================================*/");
	return 0;
}
