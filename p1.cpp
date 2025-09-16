#include <stdio.h>
int main()
{
int m1, m2, m3, total;
float p;
printf("Enter marks for Subject 1:\n"); scanf("%d", &m1);
printf("Enter marks for Subject 2:\n"); scanf("%d", &m2);
printf("Enter marks for Subject 3:\n");
scanf("%d", &m3);
total=m1+m2+m3;
p=(total/300.0)*100;
printf("Total Marks = %d\n", total); printf("Percentage = %.2f\n",p);
return 0;
}
