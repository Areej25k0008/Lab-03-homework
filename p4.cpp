#include <stdio.h>
int main()
{
float bs, hra,d,gs;
printf("Enter the basic salary:");
scanf("%f",&bs);
hra=0.10*bs;
d=0.05*bs;
gs=bs+hra+d;
printf("Gross Salary = %.2f",gs);
return 0;
}
