#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int min,max,so,chan;
	int count;
	printf("nhap so Min: ");
	scanf("%d",&min);
	printf("nhap so Max: ");
	scanf("%d",&max);
	
	for (so=min; so<=max;so++)
	{
		if (so%2==0)
		printf("So %d\n",so);
	}
	return 0;
}
