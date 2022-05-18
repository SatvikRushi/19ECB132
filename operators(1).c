#include<stdio.h>
int main(void)
{
	char form[20];
	int i=0,len;
	printf("Enter length of formula");
	scanf("%d", &len);
	printf("Enter a formula");
	scanf("%s", &form);
	while(i!=len)
	{
		if(form[i]=='+' || form[i]=='-' || form[i]=='*' || form[i]=='/' || form[i]=='%')
		printf("It is an operator");
		else
		printf("It is not an operator");
		i++;
	}
	return 0;
}
