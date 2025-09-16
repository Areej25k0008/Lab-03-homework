#include <stdio.h>
int main()
{
int num;
printf("Enter an integer between 65 and 90:");
scanf("%d", &num);
if((num>=65)&&(num<=90))
printf("%d=%c\n", num, (char) num);
else
printf("Please enter a valid number\n");
return 0;
}

