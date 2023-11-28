#include<stdio.h>
#include<conio.h>

void main()
{
 int s,c,bill;
 int u;
 printf("enter unit :");
 scanf("%d",&u);
 if(u<=50)
 {
	s=u*0.50;
 }
 if(u<=150)
 {
	s=(u-50)*0.75+25;
 }
 else if(u<=250)
 {
	s=(u-150)*1.25+100;
 }
  else
 {
	s=(u-250)*1.50+225;
 }
 printf("total=%d\n",s);

 c=s*20/100;
 bill=s+c;

 printf("bill = %d",bill);
 }