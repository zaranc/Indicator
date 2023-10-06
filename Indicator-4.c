#include<stdio.h>
main()
{
	char str[20],*pt;
	int i=0;
	printf("enter any string=");
	gets(str);
	pt=str;
	for(i=0;*pt !='\0';i++)
	{
		pt++;
	}
	printf("length of string:%d",i);
}
