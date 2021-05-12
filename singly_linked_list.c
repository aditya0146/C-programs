#include<stdio.h>
#include<malloc.h>
#define ISEMPTY printf("\nEMPTY LIST:");

struct node
{
	int value;
	struct node *next;
};

snode* create_node(int);
void insert_first();
void insert_last();
void insert_at_pos();
void delete_at_pos();
void serach();
void forward_traverse();
void backward_traverse();

typedef struct node snode;
snode *newnode,*ptr,*prev,*temp;
snode *first=NULL, *last=NULL;

int main()
{
	int ch;
	char ans='Y';
	
	while(ans=='Y'|| ans=='y')
	{
		printf("\n ENTER 1 FOR INSERTING A NODE AT THE FRONT:\n");
		printf("\n ENTER 2 FOR INSERTING A NODE AT THE LAST:\n");
		printf("\n ENTER 3 FOR INSERTING A NODE AT A GIVEN POSITION:\n");
		printf("\n ENTER 4 FOR DELETE A NODE FROM ANY POSITION:\n");
		printf("\n ENTER 5 FOR FORWARD TRAVERSING:\n");
		printf("\n ENTER 6 FOR BACKWARD TRAVERSING:\n");
		printf("\n ENTER 7 FOR EXIT:");
		printf("\n ENTER YOUR CHOICE:");
		scanf("%d",ch);
		
		switch(ch)
		{
			case 1:
				printf("\n...INSERTING NODE AT FIRST...\n");
            	insert_first();
            	break;
            	
            case 2:
            	printf("\n...INSERTING NODE AT LAST...\n");
            	insert_last();
            	break;
            	
            case 3:
            	printf("\n...INSERTING NODE AT POSITION...\n");
            	insert_at_pos();
            	break;
            case 4:
            	printf("\n...DELETING NODE FROM POSITION...\n");
            	delete_at_pos();
            	break;
            case 5:
            	printf("\n...DISPLAYING THE LIST FROM BEGINING TO END...\n");
            	forward_tarverse();
            	break;
            case 6:
            	printf("\n...DISPLAYING LIST FROM THE END...\n");
            	backward_tarverse();
            	break;
            case 7:
            	printf("\n...THANK YOU...\n");
            	return 0;
            	break;
            default:
            	printf("\n...WRONG CHOICE...");
            	break;
		}
		printf("\n DO YOU WANT TO CONTINUE:(Y/N)");
		scanf("%c",&ans);
	}
	return 0;
}

snode* create_node(int val)
{
    newnode = (snode *)malloc(sizeof(snode));
    if (newnode == NULL)
    {
        printf("\nMemory was not allocated");
        return 0;
    }
    else
    {
        newnode->value = val;
        newnode->next = NULL;
        return newnode;
    }
}

void insert_first()
{
	int val;
 
    printf("\nEnter the value for the node:");
    scanf("%d", &val);
    newnode = create_node(val);
    if (first == last && first == NULL)
    {
        first = last = newnode;
        first->next = NULL;
        last->next = NULL;
    }
    else
    {
        temp = first;
        first = newnode;
        first->next = temp;
    }
    printf("\n----INSERTED----");

}
void insert_last()
{
	int val;
 
    printf("\nEnter the value for the Node:");    
    scanf("%d", &val);
    newnode = create_node(val);
    if (first == last && last == NULL)
    {
        first = last = newnode;
        first->next = NULL;
        last->next = NULL;
    }
    else
    {
        last->next = newnode;
        last = newnode;
        last->next = NULL;
    }
 	printf("\n----INSERTED----");
}
void insert_at_pos()
{
	int pos, val, cnt = 0, i;
 
    printf("\nEnter the value for the Node:");
    scanf("%d", &val);
    newnode = create_node(val);
     printf("\nEnter the position ");
    scanf("%d", &pos);
    ptr = first;
    while (ptr != NULL)
    {
        ptr = ptr->next;
        cnt++;
    }
    if (pos == 1)
    {
        if (first == last && first == NULL)
        {
            first = last = newnode;
            first->next = NULL;
            last->next = NULL;
        }
        else
        {
            temp = first;
            first = newnode;
            first->next = temp;
        }
        printf("\nInserted");
    }
    else if (pos>1 && pos<=cnt)
    {
        ptr = first;
        for (i = 1;i < pos;i++)
        {
            prev = ptr;
            ptr = ptr->next;
        }
        prev->next = newnode;
        newnode->next = ptr;
        printf("\n----INSERTED----");
    }
    else
    {
        printf("Position is out of range");
    }
}
void delete_at_pos()
{
	int pos, cnt = 0, i;
 
    if (first == NULL)
    {
        ISEMPTY;
        printf(":No node to delete\n");
    }
    else
    {
        printf("\nEnter the position of value to be deleted:");
        scanf(" %d", &pos);
        ptr = first;
        if (pos == 1)
        {
            first = ptr->next;
            printf("\nElement deleted");    
        }
        else 
        {
            while (ptr != NULL)
            {
                ptr = ptr->next;
                cnt = cnt + 1;
            }
            if (pos > 0 && pos <= cnt)    
            {
                ptr = first;
                for (i = 1;i < pos;i++)
                {
                    prev = ptr;
                    ptr = ptr->next;
                }
                prev->next = ptr->next;
            }
            else
            {
                printf("Position is out of range");
            }
        free(ptr);
        printf("\nElement deleted");
        }
    }
}
void forward_traverse()
{
	if (first == NULL)
    {
        ISEMPTY;
        printf(":No nodes in the list to display\n");
    }
    else
    {
        for (ptr = first;ptr != NULL;ptr = ptr->next)
        {    
            printf("%d\t", ptr->value);
        }
    }
}
void backward_traverse()
{
	int val;
 
    if (ptr == NULL)
    {
        ISEMPTY;
        printf(":No nodes to display\n");
    }
    else
    {
        if (ptr != NULL)
        {
            val = ptr->value;
            rev_display(ptr->next);
            printf("%d\t", val);        
        }
 
    }
}
