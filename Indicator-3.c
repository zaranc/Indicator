#include<stdio.h>
reverse(int a[],int n)
{
	int*p,i;
	p=a;
	for(i=n-1;i>=0;i--)
	{
		printf("reverse array element=%d\n",p[i]);
	}
}
main()
{
	int a[100],n,i;
	printf("enter the number of element=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	reverse(a,n);
}
