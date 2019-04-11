#include <stdio.h>
#include<stdlib.h>

int main(void)
{
	int a,b;
	printf("請輸入小時:");
	scanf("%d",&a);
	printf("請輸入分鐘:");
	scanf("%d",&b);
	if(450<(a*60+b)&&(a*60+b)<1020)
	 	 
	 printf("正在上課");
	 
	else
	 printf("已經下課");  
	return 0;
}
