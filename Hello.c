#include<stdio.h>
int main()
{
	char *k;
	k="Hello";
	printf("%cn",*&*k);
}
//Hn