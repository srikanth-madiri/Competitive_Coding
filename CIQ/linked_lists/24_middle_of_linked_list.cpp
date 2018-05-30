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

void middle(){

	node ptr_1 = head, ptr_2 = head;
	while(ptr_2 && ptr_2->next){
		
			ptr_1 = ptr_1->next;
			ptr_2 = ptr_2->next->next;
	}
	cout<<"\nMiddle elem is : "<<ptr_1->data<<"\n";
}

void display(node cur){
	
	if(cur == NULL)
		return;
	
	display(cur->next);
	
	cout<<cur->data<<"\n";
	
}


int main(){
		
	int ch;
	for(;;){
		cout<<"\nSINGLY LINKED LIST\n\n1.insert\n2.delete\n3.middle ele\n4.display\n\nenter choice : ";
		cin>>ch;

		switch(ch){
		
			case 1 : insert_end();
				 break;

			case 2 : delete_end();
				 break;
	
			case 3 : middle();
				 break;

			case 4 : display(head);
				 break;

			default : exit(0);
				  break;
		}
	}
	
	return 0;
}
