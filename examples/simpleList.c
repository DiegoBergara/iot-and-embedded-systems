// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
  
struct listNode {
   int data;
   struct listNode* next;
};

void createList();
void* insertHead(struct listNode *head, int data);
void* deleteHead(struct listNode *head);
void printList(struct listNode *head);

struct listNode* listA = NULL;

int main() {
   // Write C code here
   printf("Hello world\n");
   listA =  (struct listNode *)insertHead(listA, 1);
   listA =  (struct listNode *)insertHead(listA, 2);
   listA =  (struct listNode *)insertHead(listA, 3);
   listA =  (struct listNode *)insertHead(listA, 4);
   listA =  (struct listNode *)insertHead(listA, 5);
   listA =  (struct listNode *)insertHead(listA, 6);
   listA =  (struct listNode *)deleteHead(listA);
   
   printf("head at %d \n",listA);
   printList(listA);
   return 0;
}

//insert link at the first location
void * insertHead(struct listNode *head, int value) {
   struct listNode *link;
   // reserved memory
   link = (struct listNode*) malloc(sizeof(struct listNode));
   
   //set link data to given one
   link->data = value;
	
   //point it to current first node
   link->next = head;
	printf("head (%d) \n",head);
   //point first to new first node
   printf("link (%d) \n",link);
   return (void *)link;
}

void* deleteHead(struct listNode *head) {
   struct listNode *link = head->next;
	
   //mark next to first link as first 
   free(head);
	
   //return deleted link
   return  (void *)link;
}



// prints the list
void printList(struct listNode* head) {
   struct listNode* ptr = head;
   printf("head at %d \n",head);
   printf("\n[ ");
	
   //start from the beginning
   while(ptr != NULL) {
      printf("(%d) ",ptr->data);
      ptr = ptr->next;
   }
	
   printf(" ]");
}