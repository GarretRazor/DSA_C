/*
Common operations on a linked list include:

    Traversal:
    This involves visiting each node in the linked list, typically starting from the head and following the next pointers until the end of the list is reached. This operation is essential for accessing, displaying, or searching for elements.
    Insertion:
    New nodes can be added to a linked list at various positions:
        At the beginning: The new node becomes the new head of the list.
        At the end: The new node is appended after the current last node.
        At a specific position: The new node is inserted between two existing nodes or at a designated index. 
    Deletion:
    Existing nodes can be removed from the linked list:
        From the beginning: The head node is removed, and the next node becomes the new head.
        From the end: The last node is removed.
        From a specific position: A node at a given index or with a specific value is removed. 
    Searching:
    This operation involves traversing the list to find a node that matches a specific value or satisfies a particular condition.
    Updating/Modification:
    The data within an existing node can be changed after locating it through traversal or searching.
    Reversal:
    The order of nodes in the linked list can be reversed, making the original last node the new head and updating the next pointers accordingly.
    Sorting:
    Nodes can be arranged in a specific order (e.g., ascending or descending) based on their data values.
    Merging:
    Two separate linked lists can be combined into a single linked list.
*/
#include<stdlib.h>
#include<string.h>
typedef struct node{
         int num;
	 struct node* next;
} node;

typedef struct linked_list{
	struct node* head;
	struct node* tail;
}linked_list;


linked_list* create_ll();
void initialize_ll(linked_list* ll);
int append_tail(node* node, linked_list* ll);
node* create_node();

linked_list* create_ll(){
       linked_list* ll = malloc(sizeof(linked_list));
      
       memset(ll, 0,sizeof(*ll));
       return ll;
}
void initialize_ll(linked_list* ll)
{
      if(ll == NULL)
	return;
      ll->head = NULL;
      ll->tail = NULL;

}
node* create_node(int num)
{  
   node* new_node = malloc(sizeof(node));
   new_node->num = num; 
   return new_node;	
}	
int append_tail(node* node, linked_list* ll)
{    //Check if list is empty and then point the list head to the tail. 
     if(ll->head == NULL)
     {
	ll->tail = node;
        ll->head = node; 
     }
     else{ 
	ll->tail->next = node;
	ll->head = ll->tail->next; 
     } 
}    

