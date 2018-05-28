#include <stdio.h>
#include <stdlib.h>
struct node
{
	struct node *prev;
	int num;
	struct node *next;
};
struct node *head=0,*temp,*total,*bck; 

void insert()
{
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter the number to insert\n");
	scanf("%d",&temp->num);
	if(head==0)
	{
		bck=head=total=temp;
		
		total->prev=0;
	}
	else
	{	
		total->next=temp;
		total=temp;
		total->prev=bck;
		bck=total;
	}
	total->next=0;
}

void display()
{
	total=head;
	while(total!=0)
	{
		printf("%d\n",total->num );
		total=total->next;
	}
}

void next()
{
	if(total!=0)
	{

		printf("%d\n",total->num );
		total=total->next;	
	}
}
void nextnode()
{
	if(total->next!=0)
	{

		total=total->next;
		printf("%d\n",total->num );
		
	}
}
void previousnode()
{
	if(total->prev!=0)
	{
		printf("Test \n");

		total=total->prev;	
		printf("%d\n",total->num );
	}
}
void insertatnode()
{
	int nodenum,nodecounter=1;
	temp=(struct node*)malloc(sizeof(struct node*));
	printf("The node to insert at \n");
	scanf("%d",&nodenum);
	printf("Enter the number \n");
	scanf("%d",&temp->num);
	total=head;
	while(nodecounter<=nodenum)
	{
		total=total->next;
		if(nodecounter==nodenum)
		{
			printf("1\n");
			total=total->next;
			temp->next=total;
			printf("2\n");
			total=total->prev;
			total->next=temp;
			printf("3\n");
			temp->prev=total;
			bck=total=total->next;
			total=total->next;
			printf("4\n");
			total->prev=bck;

			
		}
		nodecounter++;
	}
}

void main()
{
	int choice;
	do
	{
	printf("1.Insert a node\n");
	printf("2.Go Forward\n");
	printf("3.Display the list\n");
	printf("4.Go backward\n");
	printf("5.Insert at node\n");
	printf("6.Exit\n");
	printf("Enter your choice\n");
	scanf("%d",&choice);
		switch(choice)
		{
			case 1:insert();
			break;
			case 2:nextnode();
			break;
			case 3:display();
			break;
			case 4:previousnode();
			break;
			case 5:insertatnode();
			break;
			case 6:
			break;
		}
	}while(choice!=6);
}