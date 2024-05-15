// character count //
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int len;
	printf("\n enter the string :");
	scanf("%s",&str);
	len=strlen(str);
	printf("\n length of given string is %d",len);
	printf("%s",str);
	return(0);
}
