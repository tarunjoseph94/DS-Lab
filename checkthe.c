#include <stdio.h>
void main()
{
	char str[10];
	int i,len,count=0;
	printf("Enter the String\n");
	scanf("%s",str);
	for(len=0;str[len]!='\0';len++);
		
	for(i=0;i<len;i=i+3)
	{
		
		if(((str[i]=='t')||(str[i]=='T'))&&((str[i+1]=='h')||(str[i+1]=='H'))&&((str[i+2]=='e')||(str[i+2]=='E')))
		{
			count++;
		
		}
	}
	printf("The number of times the apperars is %d \n",count);	
}