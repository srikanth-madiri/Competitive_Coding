#include<bits/stdc++.h>

using namespace std;

struct linked_list{
	int data;
	linked_list *next;
};

typedef struct linked_list* node;
node head = NULL;

node create_node(int val){

	node temp = new linked_list();
	temp->data = val;
	temp->next = NULL;
	return temp;
}

void insert_end(){
	
	int val;
	cout<<"\nEnter the ele : ";
	cin>>val;
	node temp = create_node(val);

	if(head == NULL){
		head = temp;
		return;
	}
	node cur = head;
	while(cur->next != NULL)
		cur = cur->next;
	cur->next = temp;
}


void delete_end(){

	if(head == NULL)
		cout<<"\nNo Linked_list\n";
	else if(head->next == NULL){
		head = NULL;
	}
	else{

		node cur = head;
		node temp; //last but one node
		while(cur->next != NULL){
			temp = cur;
			cur = cur->next;
		}
		
		temp->next = NULL;
		free(cur);
	}

}

node reverse(node head){
	if(!head){

		cout<<"\nNo linked list\n";
		return NULL;
	}

	node prev = NULL, cur=head, next = head;

	while(cur){

		next = cur->next;
		cur->next = prev;
		prev = cur;
		cur = next;
	}

	head = prev;
	return head;
}

void palindrome(){

	node head1 = head, head2= head;
	if(!head1){
		cout<<"\nNo linkied list\n";
		return;
	}

	if(head1->next->next == NULL){
		cout<<"\n## palindrome ##\n";
		return;
	}
	
	node ptr_1 = head1, ptr_2 = head1;
	while(ptr_2 && ptr_2->next){

		ptr_1 = ptr_1->next;
		ptr_2 = ptr_2->next->next;
	}
	// FOR ODD LENGTH LISTS
	if(ptr_2){
		head2 = ptr_1->next;
		head2 = reverse(head2);
		head1 = head;
		while(head1 != ptr_1){

			if(head1->data == head2->data){
				head1 = head1->next;
				head2 = head2->next;
				continue;
			}
			else{
				cout<<"\nNot a palindrome\n";
				break;
			}
			
			cout<<"\n## palindrome ##\n";

		}
	}
	// FOR EVEN LENGTH LISTS
	else {
		head2 = ptr_1;
		head2 = reverse(head2);
		head1 = head;
		while(head1->next != ptr_1){

			if(head1->data == head2->data){
				head1 = head1->next;
				head2 = head2->next;
				continue;
			}
			else{
				cout<<"\nNot a palindrome\n";
				break;
			}
			
			cout<<"\n## palindrome ##\n";
		}
	}
}

void display(){
	
	if(head == NULL){
		cout<<"\nNo Linked_List\n";
		return;
	}
	
	node cur = head;
	while(cur != NULL){
		cout<<cur->data<<"\n";
		cur = cur->next;
	}
}

int main(){
		
	int ch;
	for(;;){
		cout<<"\nSINGLY LINKED LIST\n\n1.insert_start\n2.delete_end\n3.palindrome\n4.display\n\nenter choice : ";
		cin>>ch;

		switch(ch){
		
			case 1 : insert_end();
				 break;

			case 2 : delete_end();
				 break;

			case 3 : palindrome();
				 break;
			
			case 4 : display();
				 break;

			default : exit(0);
				  break;
		}
	}
	
	return 0;
}
