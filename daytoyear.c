#include <stdio.h>
void main()
{
	int day,year,week;
	printf("Enter the number of days");
	scanf("%d",&day);

	week=day/7;
	day=day%365%7;
	year=week/52;
	week=week%52;
	printf("The number of years is %d\n",year );
		printf("The number of weeks is %d\n",week );
			printf("The number of days is %d\n",day );
}
