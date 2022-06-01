#include<stdio.h>
#include<stdbool.h>
#include<string.h>
int main(void)
{
	char str[20];
	printf("Enter a string");
	scanf("%s", &str);
	if(!strcmp(str, "auto") || !strcmp(str, "default")  
        || !strcmp(str, "signed") || !strcmp(str, "enum")  
        ||!strcmp(str, "extern") || !strcmp(str, "for")  
        || !strcmp(str, "register") || !strcmp(str, "if")  
        || !strcmp(str, "else")  || !strcmp(str, "int") 
        || !strcmp(str, "while") || !strcmp(str, "do") 
        || !strcmp(str, "break") || !strcmp(str, "continue")  
        || !strcmp(str, "double") || !strcmp(str, "float") 
        || !strcmp(str, "return") || !strcmp(str, "char") 
        || !strcmp(str, "case") || !strcmp(str, "const") 
        || !strcmp(str, "sizeof") || !strcmp(str, "long") 
        || !strcmp(str, "short") || !strcmp(str, "typedef") 
        || !strcmp(str, "switch") || !strcmp(str, "unsigned") 
        || !strcmp(str, "void") || !strcmp(str, "static") 
        || !strcmp(str, "struct") || !strcmp(str, "goto") 
        || !strcmp(str, "union") || !strcmp(str, "volatile"))
        printf("It is a keyword");
        else
        printf("It is not a keyword");
}
/* output
Enter a string 2
It is not a keyword */