#include<stdio.h>
#include<conio.h>
#define MAXSIZE 10
int queue[MAXSIZE],rear=-1,front=0;
int main()
{

	int choice;
	do{
	printf("\n---------------Queue Menu--------------");
	printf("\n 1.insert \n 2.delete \n 3.Display \n 4.Exit");
	printf("\n---------------------------------------");
	printf("\nEnter your choice");
	scanf("%d",&choice);
	switch(choice)
	{ case 1:insert();
		break;
		case 2:delete1();
		break;
		case 3:display();
	}}
    while(choice!=4);    // do loop is used for continuous display of menu
    getch();
}
insert(){
	int n;
	if(rear==MAXSIZE-1)
	{
		printf("queue overflow\n");
	}
	else{
		printf("\nEnter the element:\n");
		scanf("%d",&n);
		printf("\ninserted");
		rear++;
		queue[rear]=n;
	}}
	display()
	{
	if(front>rear){
		printf(" Queue is empty");
	}
	else{
		printf("\nElements of queue:\n");
		int i;
		for(i=rear;i>=front;i--)
	{
			printf("\n%d",queue[i]);
		}
	}
    }
    delete1(){
    	int n;
    	if(front>rear){
    		printf("Queue is empty");
		}
		else{
			n=queue[front];
			front++;
			printf("Deleted element is %d",queue[front-1]);
		}
	}
		
	
	
