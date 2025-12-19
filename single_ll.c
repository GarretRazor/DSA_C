typedef struct node{
	int data;
	struct node* next;
}node;





int main(){

	node node_one;
	node node_two; 
        node node_three; 

	node_one.next = &node_two;
	node_two.next = &node_three;
	node_three.next = NULL; 
} 





