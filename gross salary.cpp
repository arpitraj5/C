#include<stdio.h>
int main()
{
int basic,hra,da,it,gs;
printf("enter the basic salary of employee:");
scanf("%d",&basic);
hra=basic*0.4;
da=basic*0.3;
it=basic*0.3;
gs=basic+hra+da-it;
printf("gross salary=%d",gs);
}
