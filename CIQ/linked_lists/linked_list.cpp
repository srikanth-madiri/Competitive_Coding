/* Linked	List */

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


void insert_start(){
	
	int val;
	cout<<"\nEnter the ele : ";
	cin>>val;
	node temp = create_node(val);

	if(head == NULL){
		head = temp;
		return;
	}

	temp->next = head;
	head = temp;
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

void insert_random(){

	int val, pos;
	cout<<"Enter the elem : ";
	cin>>val;
	cout<<"Enter the pos : ";
	cin>>pos;
	
	node temp = create_node(val);

	node cur = head;
	int counter=0;
	while(cur != NULL){
		cur = cur->next;
		counter++;
	}
	if(pos == 1){
		if(head == NULL)
			head = temp;
		else{

			temp->next = head;
			head = temp;
		}
	}
	else if(pos>1 && pos<=counter){
		node cur=head,prev;
		for(int i=1;i<pos;i++){
			prev = cur;
			cur = cur->next;	
		}
		prev->next = temp;
		temp->next = cur;
	}
	else if(pos == counter+1){
		node cur = head;
		while(cur->next != NULL)
			cur = cur->next;
		cur->next = temp;
	}
	else
		cout<<"\nOut of range\n";
}

void delete_start(){

	if(head == NULL)
		cout<<"\nNO Linked_list\n";
	
	else if(head->next == NULL){
		head = NULL;
	}
	else{

		node temp = head;
		head = head->next;
		free(temp);
	}
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

void delete_random(){
	
	int pos;
	cout<<"enter the position to be deleted : ";
	cin>>pos;
	
	int count = 0;
	node cur = head;
	while(cur != NULL){
		cur = cur->next;
		count++;
	}
	if(pos<=0 || pos>count)
		cout<<"\ndeletion out of range\n";
	
	else if(pos == 1){

		node cur = head;
		head = head->next;
		free(cur);
	}
	
	else{

		node cur=head, prev;
		for(int i=1;i<pos;i++){
			prev = cur;
			cur = cur->next;
		}
		prev->next = cur->next;
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

void search(){
	
	int val;
	cout<<"Enter the elem to be searched : ";
	cin>>val;

	if(head == NULL)
		cout<<"\nNo Linked_list\n";
	else if(head->next == NULL){
		if(head->data == val){
			cout<<"\nfound : "<<head->data<<" at pos "<<1;
			return;
		}
		else{
			
			cout<<"value : "<<val<<" not found\n";
			return;
		}

	}else{
		node cur = head;
		int count=0;
		while(cur != NULL){
			count++;
			if(cur->data == val){
				
				cout<<"\nfound : "<<cur->data<<" at pos "<<count;
				return;
			}
			cur = cur->next;
		}
		
		cout<<"value : "<<val<<" not found\n";
	}
}

int main(){
		
	int ch;
	for(;;){
		cout<<"\nSINGLY LINKED LIST\n\n1.insert_start\n2.insert_end\n3.insert_random\n4.delete_start\n5.delete_end\n6.delete_random\n7.search\n8.display\n\nenter choice : ";
		cin>>ch;

		switch(ch){
		
			case 1 : insert_start();
				 break;

			case 2 : insert_end();
				 break;
	
			case 3 : insert_random();
				 break;

			case 4 : delete_start();
				 break;

			case 5 : delete_end();
				 break;

			case 6 : delete_random();
				 break;
			
			case 7 : search();
			 	 break;
			
			case 8 : display();
				 break;

			default : exit(0);
				  break;
		}
	}
	
	return 0;
}
