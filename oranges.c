#include<stdio.h>
int main()
{
int oranges;
int dozens;
printf("Enter number of oranges : ");
scanf("%d" , &oranges);

dozens = oranges % 12 ;

if(dozens == 0)
{
	dozens = oranges / 12;
	printf("you make %d dozens oranges" , dozens);
}

else 
{
	printf("Your required oranges cannot be given in dozens");
}

return 0;
}
