#include <stdio.h>
void push1(int);
void push2(int);
int pop1();
int pop2();
void enqueue();
void dequeue();
void display();

int stk1[5];
int stk2[5];
int top1=-1;
int top2=-1;
int count=0;

void main()
{
	
	int choice;
	while(choice!=4)
	{
		printf("1.Enqueue\n");
		printf("2.Dequeue\n");
		printf("3.Display\n");
		printf("4.Exit\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:enqueue();
			break;
			case 2:dequeue();
			break;
			case 3:display();
			break;
			case 4:
			break;

		}
	}
}

void push1(int data)
{
 	stk1[++top1]=data;
}
void push2(int data)
{
 	stk2[++top2]=data;
}
int pop1()
{
	return stk1[top1--];
}
int pop2()
{
	return stk2[top2--];
}
void enqueue()
{
	int item;
	printf("Enter the item to be pushed\n");
	scanf("%d",&item);
	push1(item);
	count++;
}
void dequeue()
{
	int item,i;
	for(i=0;i<count;i++)
	{
		push2(pop1());
	}
	item=pop2();
	count--;
	printf("The item popped is %d\n",item);
	for(i=0;i<count;i++)
	{
		push1(pop2());
	}
	
}
void display()
{
	int i;
	printf("The queue is\n");
	for ( i = 0; i < count; ++i)
	{
		printf("%d\n",stk1[i]);
	}

}