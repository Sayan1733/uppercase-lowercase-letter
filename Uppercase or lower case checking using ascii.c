#include <stdio.h>

int main()
{
	char ch;
	printf("Enter The Letter:");
	scanf("%c",&ch);
	
	if(ch>=60 && ch<=90)
		printf("The Letter is in uppercase!");
	else
		printf("The Number is in Lowercase!");
		
		return 0;
}
