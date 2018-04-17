#include <stdio.h>
void recpercent(int);
void main()
{
	int val;
	printf("Enter the value\n");
	scanf("%d",&val);
	recpercent(val);
}
void recpercent(int v)
{
	static float count;
	float result;
	if(count<100)
	{
		count++;

		result=v*(count/100);
		 result=v-result;
		printf("%0.2f percent of %d = %0.2f\n",count,v,result );
		recpercent(v);
	}
}