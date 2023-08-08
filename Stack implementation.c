#include<stdio.h>
#include<conio.h>
#define MAXSIZE 10
int stack[MAXSIZE],top=-1;
int main()
{
	int choice;
	printf("\n---------------Stack Menu--------------");
	printf("\n 1.PUSH \n 2.POP \n 3.Display \n 4.Exit");
	printf("\n---------------------------------------");
	printf("\nEnter your choice");
	scanf("%d",&choice);
	switch(choice)
	{ case 1:push();
		break;
		case 2:pop();
		break;
		case 3:display();
	}
    while(choice!=4);
    getch();
}
push(){
	int n;
	if(top==MAXSIZE-1)
	{
		printf("Stackoverflow\n");
	}
	else{
		printf("\nEnter the element:\n");
		scanf("%d",&n);
		printf("\nPushed");
		top++;
		stack[top]=n;
	}}
	display()
	{
	if(top=-1){
		printf("Stack is empty");
	}
	else{
		printf("\nElements of stack:\n");
		int i;
		for(i=top;i>0;i--)
	{
			printf("\n%d");
		}
	}
    }
    pop(){
    	int n;
    	if(top=-1){
    		printf("Stack is empty");
		}
		else{
			n=stack[top];
			top--;
			printf("Popped element is %d");
		}
	}
		
	
	
