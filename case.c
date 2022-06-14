#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ch;
	printf("\nEnter a lower cased alphabet:");
	scanf("%c",&ch);
	if (ch<'a'||ch>'z')
	
	printf("\nCharacter not a lower cased alphabet");
	else
	
		switch (ch)
		{
		
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("Character Alphabet is a vowel");
			break;
		case 'z':
			printf("\n Last Alphabet 'z' was entered");
			break;
		default:
			printf("\nCharacter is a consonant");
			break;
		}
	return 0;
}
