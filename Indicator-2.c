#include<stdio.h>
main()
{

   int a[5]={5,9,3,2,8};
   int *p=&a[0];
   int i;
   for(i=0;i<5;i++)
   {
   	   printf("%d",*(p+i));
   } 
}
