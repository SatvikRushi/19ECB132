#include<stdio.h>
#include<string.h>
int main()  {
int d,k;
printf("enter the number of production");
scanf("%d",&d);
for ( k=0;k<d;k++)
{
        printf("Enter production :%d\n",k);
  char input[100],*l,*r,*temp,tempprod[20],productions[25][50];
   int i=0,j=0,flag=0,n=0,d,x=0;
scanf("%s",&input);
    l = strtok(input,"->");
    r = strtok(NULL,"->");
    temp = strtok(r,"|");
    while(temp)  {
        if(temp[0] == l[0])  {
            flag = 1;
            sprintf(productions[i++],"%s'->%s%s'\0",l,temp+1,l);
        }
        else
            sprintf(productions[i++],"%s->%s%s'\0",l,temp,l);
        temp = strtok(NULL,"|");
    }
    sprintf(productions[i++],"%s'->\356\0",l);
    if(flag == 0)
{
        printf("The given productions don't have Left Recursion");
}
else{

  for(j=0;j<i;j++)  {
       printf("\n%s",productions[j]);
        }
printf("\n");
}
}
return 0;
}
