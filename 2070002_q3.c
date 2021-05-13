#include<stdio.h>
#include<stdlib.h>
void push(int), disp();
int pop(), peek();
struct Stack
{
        int info;               
        struct Stack *next;     
}*top;

typedef struct Stack STACK;

int main()
{
        int ch, temperature;
        top=NULL;
        do
        {
                system("cls");
                printf("Menu\n1.Push\n2.Display\n3.Pop\n4.Peek\n5.Quit\n\nEnter Choice:");
                scanf("%d", &ch);
                fflush(stdin);
                switch(ch)
                {
                        case 1:
                        		printf("Enter the temperature you want to Push:");
                        		scanf("%d", &temperature);
                                push(temperature);
                                break;
                        case 2:
                                disp();
                                break;
                        case 3:
                        		temperature=pop();
                        		if(temperature!=-999)
                        			printf("\n%d popped out\n", temperature);
                        		break;
                        case 4:
                        		temperature=peek();
                        		if(temperature!=-999)
                        			printf("\nTop contains %d\n", temperature);
                        		break;
                }
                printf("\n\nPress Enter to continue...");
                fflush(stdin);
                getchar();

        }while(ch != 5);
        printf("bye");
}

void push(int temperature)
{
        STACK *node = (STACK*) malloc(sizeof(STACK));
        if(node == NULL)
        {
        	printf("\nOverflow");
        	return;
		}
		node->info = temperature;
        node->next = top;
		top = node;
        
        printf("Successfully pushed\n"); 
		
}

void disp()
{
        STACK *temp = top;
        if(top==NULL)
        {
        	printf("Empty");
		}
		else
		{
        	while(temp)
	        {
    	            printf("%d-> ", temp->info);
        	        temp = temp->next;
        	}
   		}

}

int pop()
{
	STACK *temp;
	int temperature;
	if(top == NULL)
	{
		printf("\nUnderflow\n");
		return -999;
	}
	temperature=top->info;
	temp=top;
	top = top->next;
	free(temp);
	return temperature;
}

int peek()
{
	STACK *temp;
	int temperature;
	if(top == NULL)
	{
		printf("\nEmpty\n");
		return -999;
	}
	return top->info;
}
