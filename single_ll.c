#include<stdio.h>
typedef struct node{
	int data;
	struct node* next;
}node;
int main(){

	node one;
	node two; 
        node three; 
        one.data = 1;
        two.data = 2;
	three.data = 3;
      	
	one.next = &two;
	two.next = &three;
	three.next = NULL; 
        
	node* temp = &one;

	while(temp->next != NULL) 
	{   
	    int node_count = 1;
	    printf("Node %d has data %d", node_count, temp->data); 
	    node_count++;
	    temp = temp->next; 
	} 
	    
} 





