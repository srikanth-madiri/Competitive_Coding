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

void even_or_odd(){

	if(!head){
		cout<<"\nNo list \n";
		return;
	}

	node ptr = head;
	while(ptr && ptr->next)
		ptr = ptr->next->next;
	if(ptr == NULL){
		cout<<"\nEven length list\n";
		return;
	}
	cout<<"\nOdd length list\n";
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
		cout<<"\nSINGLY LINKED LIST\n\n1.insert\n2.delete\n3.even or odd\n4.display\n\nenter choice : ";
		cin>>ch;

		switch(ch){
		
			case 1 : insert_end();
				 break;

			case 2 : delete_end();
				 break;
	
			case 3 : even_or_odd();
				 break;

			case 4 : display(head);
				 break;

			default : exit(0);
				  break;
		}
	}
	
	return 0;
}
