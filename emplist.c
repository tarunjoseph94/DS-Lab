#include <stdio.h>

struct node
{
	int empno;
	char empname[20];
	struct node *ptr;
};

struct node *temp,*first=0,*total,*bckptr;

void insert()
{
		temp=(struct node*)malloc(sizeof(struct node));
		printf("Enter the empno\n");
		scanf("%d",&temp->empno);
		printf("Enter the emp name\n");
		scanf("%s",temp->empname);
		if(first==0)
		{
			first=total=temp;
		}
		else
		{
			total->ptr=temp;
			total=temp;
		}
		total->ptr=0;
		
}
void delete()
{
	int nodeno,nodecount=0;
	printf("Enter the node number to delete\n");
	scanf("%d",&nodeno);
	if(nodeno==0)
	{
	printf("Error in deleting\n");
	}
	else
	{
	total=first;
	while(nodeno!=nodecount)
		{
			if(nodecount-1==nodeno)
			{
				bckptr=total;
			}
			total=total->ptr;
			nodecount++;
			temp->ptr=total->ptr;
			free(total);
		}
		bckptr->ptr=temp->ptr;
		nodecount=0;
		total=first;
		while(nodeno!=nodecount-1)
		{
			total=total->ptr;
			nodecount++;;
		}
		total=bckptr;

	}
}
void search()
{
	int nodeno,flag=0,nodecount=1;
	printf("Enter the node number to serach\n");
	scanf("%d",&nodeno);
	if(nodeno==0)
	{
	printf("Error in Display\n");
	}
	else
	{
	total=first;
	while(total!=0)
		{
			if(nodecount==nodeno)
			{
				printf("%d\n",total->empno );
				printf("%s\n",total->empname );
				flag=1;
				break;
			}
			total=total->ptr;
			nodecount++;
		}	
		if(flag==0)
		{
			printf("The node not found\n");
		}
}
}
void display()
{
	total=first;
	while(total!=0)
	{
		printf("%d\n",total->empno );
		printf("%s\n",total->empname );
			total=total->ptr;
	}
}
void main()
{
	int choice;
	do
	{
	printf("1.Insert a node\n");
	printf("2.Delete in a node\n");
	printf("3.Display the list\n");
	printf("4.Search in the node\n");
	printf("5.Exit\n");
	printf("Enter your choice\n");
	scanf("%d",&choice);
		switch(choice)
		{
			case 1:insert();
			break;
			case 2:delete();
			break;
			case 3:display();
			break;
			case 4:search();
			break;
			case 5:
			break;
		}
	}while(choice!=5);
}

