#include <stdio.h>

int main()
{
	char ch;
	
	printf("Enter The Letter:");
	scanf("%c",&ch);
	
	if(ch >= 'A' && ch<= 'Z')
	{
		printf("The Letter is uppercase!");
	}
	else
	{
		printf("The Letter is in lowercase!");
	}
	return 0;
}
