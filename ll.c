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
struct node* delete_begin();
struct node* insert_middle();
struct node* delete_end();
struct node* create_node(int num, linked_ll);
linked_list* create_ll(){
       linked_list* ll = malloc(sizeof(linked_list));
      
       memset();
       return ll;
}
void initialize_ll(linked_list* ll)
{
      if(ll == NULL)
	return;
      ll->head = NULL;
      ll->tail = NULL;

}

