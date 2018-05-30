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

void kth_node_last(){

	if(head == NULL){

		cout<<"\nNo linked list\n"<<endl;
		return;
	}
	int k;
	cout<<"Enter the kth value : "<<endl;
	cin>>k;
	node p1=head, p2=head;

	for(int i =0;i<k;i++){
		if(p2 == NULL){
			cout<<"linked list has only : "<<i+1<<" elements\n"<<endl;
			return;
		}
		else
			p2 = p2->next;
	}
	while(p2 != NULL){

		p1 = p1->next;
		p2 = p2->next;
	}
	cout<<k<<"th element from last is : "<<p1->data<<endl;

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
	
			case 3 : kth_node_last();
				 break;

			case 4 : display();
				 break;

			default : exit(0);
				  break;
		}
	}
	
	return 0;
}
