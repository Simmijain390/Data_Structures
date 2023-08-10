#include<stdio.h>
#include<conio.h>
#define MAXSIZE 10
int cq[MAXSIZE],rear=-1,front=0;
int main()
{

	int choice;
	do{
	printf("\n-----------Circular Queue Menu--------------");
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
	if((rear+1)%MAXSIZE==front)
	
		printf("circular queue overflow\n");
	else
		printf("\nEnter the element:\n");
		scanf("%d",&n);
		if(rear==-1 && front==-1){
			rear=0;
			front=0;
		}else{
		rear=(rear+1)%MAXSIZE;
		cq[rear]=n;
		printf("\ninserted");
	}}
	display()
	{
	if(front==-1 &&rear==-1){
		printf(" Queue is empty");
	}
	else{
		printf("\nElements of queue:\n");
		int i;
		for(i=front;i!=rear;(i=(i+1)%MAXSIZE)){
			printf("\n%d",cq[i]);
		
	}
    }}
    delete1(){
        int n;
    	if(front==-1 && rear==-1){
    		printf("Queue is empty");
		}
		else{
		    if(front==rear)
		    {
		    	front=-1;
		    	rear=-1;
			}
			front=(front+1)%MAXSIZE;
			printf("Deleted element is %d",n);
		}
	}
		
	
	
