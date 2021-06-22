#include<stdio.h>
int main()
{
	int year;
	int leapyear;
	int remainder;
		
		printf("Enter a year:");
		scanf("%d" , &leapyear);
		
		if(leapyear % 4 == 0)
		{
			printf("%d is a leap year" , leapyear);
		}
		else 
		{
			remainder = leapyear % 4;
			year = 4 - remainder;
			
			printf("leapyear will come after %d years" , year);
		}
		
return 0;
}
