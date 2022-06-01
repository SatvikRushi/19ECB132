#include<stdio.h>
int main(void)
{
	int x[10];
	int i,n;
	printf("Enter a value for n ");
	scanf("%d",&n);
	printf("Enter integer elements into array ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
		if(x[i] >= 0 && x[i] <= 9)
		printf("%d",x[i]);
		else 
		printf("The element you have entered is not an integer");
	}
	return 0;
}
/* output
Enter a value for n 2
Enter integer elements into array 3
3
2
2 */