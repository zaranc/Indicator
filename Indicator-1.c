#include<stdio.h>

main()
{
	int a,b,temp;
	printf("Enter A Value =");
	scanf("%d",&a);
	printf("Enter B Value =");
	scanf("%d",&b);
	
	int *p,*p1;
	
	p=&a;
	p1=&b;
	
	temp =*p;
	*p = *p1;
	*p1 = temp;
	
	printf("Swapping Value A =%d\n",*p);
	printf("Swapping Value B =%d\n",*p1);
}
