#include <stdio.h>
 int main()
 {
int a,b,c;
printf("Enter value of a:\n");
scanf("%d",&a);
printf("Enter value of b:\n");
scanf("%d", &b);
c=a;
a=b;
b=c;
printf("After swapping a=%d and b=%d",a, b);
return 0;
}
