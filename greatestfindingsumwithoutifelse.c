#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter the value of a,b,c\n");
	scanf("%d%d%d",&a,&b,&c);
	(a>b)?:
	(a>c)?printf("the greater number is %d\n",a):printf("the greatest number is %d\n",c);
	(b>c)?printf("the greater number is %d\n",b):printf("the greatest number is %d\n",c);
	
}
