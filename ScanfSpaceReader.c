#include <stdio.h>

int main()
{
	char c[16];
	FILE *fp;
	printf("Enter your name : ");
	scanf("%[^\n]",c);
	fflush(stdin);
	printf("welcome %s how are you today?\n",c);
	
	
	return 0;
}
