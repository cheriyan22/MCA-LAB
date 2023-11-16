#include<stdio.h>
#include<stdlib.h>
void main()
{
int a,b;
printf("Enter 2 numbers to find the greatest among\n");
scanf("%d%d", &a,&b);
if(a>b)
printf("The Greatest number is %d", a);
else
printf("The Greatest number is %d", b);
} 
