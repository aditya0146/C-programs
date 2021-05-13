#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
   int data;
   int key;
	
   struct node *next;
   struct node *prev;
};

struct node *head = NULL;
struct node *last = NULL;
struct node *current = NULL;

bool isEmpty() {
   return head == NULL;
}

int length() {
   int length = 0;
   struct node *current;
	
   for(current = head; current != NULL; current = current->next){
      length++;
   }
	
   return length;
}

void Forward_traverse() {


   struct node *ptr = head;
	

   printf("\n[ ");
	
   while(ptr != NULL) {        
      printf("(%d,%d) ",ptr->key,ptr->data);
      ptr = ptr->next;
   }
	
   printf(" ]");
}


void Backward_traverse() {

   struct node *ptr = last;
	

   printf("\n[ ");
	
   while(ptr != NULL) {    
	
      printf("(%d,%d) ",ptr->key,ptr->data);
		
      ptr = ptr ->prev;
      
   }
	
}

void Add(int key, int data) {

   struct node *link = (struct node*) malloc(sizeof(struct node));
   link->key = key;
   link->data = data;
	
   if(isEmpty()) {
      last = link;
   } else {
      head->prev = link;
   }

   link->next = head;
	
   head = link;
}

struct node* delete(int key) {
   struct node* current = head;
   struct node* previous = NULL;
	
   if(head == NULL) {
      return NULL;
   }

   while(current->key != key) {
		
      if(current->next == NULL) {
         return NULL;
      } else {
         previous = current;
         current = current->next;             
      }
   }

   if(current == head) {
      head = head->next;
   } else {
      current->prev->next = current->next;
   }    

   if(current == last) {
      last = current->prev;
   } else {
      current->next->prev = current->prev;
   }
	
   return current;
}

bool insert_at_position(int key, int newKey, int data) {
   struct node *current = head; 
	
   if(head == NULL) {
      return false;
   }

   while(current->key != key) {
	
      if(current->next == NULL) {
         return false;
      } else {           
         current = current->next;
      }
   }
   struct node *newLink = (struct node*) malloc(sizeof(struct node));
   newLink->key = newKey;
   newLink->data = data;

   if(current == last) {
      newLink->next = NULL; 
      last = newLink; 
   } else {
      newLink->next = current->next;         
      current->next->prev = newLink;
   }
	
   newLink->prev = current; 
   current->next = newLink; 
   return true; 
}
void main()
{
	int ch,item,pl,no,nwpl,data,del;
	do
	{
		system("cls");
		printf("Menu\n1.ADD\n2.TRAVERSE FORWARD\n3.TRAVERSE BACKWARD\n4.INSERT AT POSITION\n5.DELETE AT POSITION\n6.QUIT\n\nEnter Choice:");
                scanf("%d", &ch);
                fflush(stdin);
                switch(ch)
                {
                        case 1:
                        		printf("Enter the price:");
                        		scanf("%d", &item);
                        		printf("enter the product_number");
                        		scanf("%d",&no);
                                add(no,item);
                                break;
                        case 2:
                                Forward_traverse();
                                break;
                        case 3:
                        		Backward_traverse();
                        		break;
                        case 4:
                        		printf("Enter the place you want to enter:");
                        		scanf("%d",&pl);
                        		printf("Enter the new place you want to enter:");
                        		scanf("%d",&nwpl);
                        		printf("Enter the data you want to enter:");
                        		scanf("%d",&data);
                        		insert_at_position(pl,nwpl,data);
                        		break;
                        case 5:
                        		printf("Enter the position you want to delete:");
                        		scanf("%d",&del);
                        		delete(del);
                }
                printf("\n\nPress Enter to continue...");
                fflush(stdin);
                getchar();

        }while(ch != 6);
        printf("bye");
}

