#include<stdio.h>
int main()
{
	int windspeed;
	
	printf("Enter windspeed:");
	scanf("%d" , &windspeed);
	
	if(windspeed<25)
	{
		printf("Not a strong wind");
	}
	else if(windspeed>=25 && windspeed<=38)
	{
		printf("Strong wind");
	}
	else if (windspeed>=39 && windspeed<=54)
	{
		printf("gale");
	}
	else if(windspeed>=55 && windspeed<=72)
	{
		printf("Whole gale");
	}
	else if(windspeed>=72)
	{
		printf("hurricane");
	}
	
return 0;
}
