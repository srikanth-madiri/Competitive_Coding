/* Write code to remove duplicates from an unsorted linked list. */

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

void del_dup(){

	if(head == NULL){

		cout<<"\nNo linked list\n"<<endl;
		return;
	}
	if(head->next == NULL){

		display();
	}
	else{
		unordered_set<int> us;
		node cur = head,prev = head;

		while(cur != NULL){
			
			if(us.find(cur->data)==us.end()){
				
				us.insert(cur->data);
				prev = cur;
				cur = cur->next;
			}
			else{
				
				prev->next = cur->next;
				cur = cur->next;
			}
		}
		display();
	}
}

int main(){
		
	int ch;
	for(;;){
		cout<<"\nSINGLY LINKED LIST\n\n1.insert\n2.delete\n3.delete duplicates\n4.display\n\nenter choice : ";
		cin>>ch;

		switch(ch){
		
			case 1 : insert_end();
				 break;

			case 2 : delete_end();
				 break;
	
			case 3 : del_dup();
				 break;

			case 4 : display();
				 break;

			default : exit(0);
				  break;
		}
	}
	
	return 0;
}
