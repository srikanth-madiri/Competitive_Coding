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

void josephus_circle(){
	
	int n,m	;
	node p, q;
	cout<<"\nenter the no of nodes : ";
	cin>>n;
	cout<<"enter the M (every Mth player gets eliminated) : ";
	cin>>m;

	p = q = create_node(1);
	p->data = 1;
	for(int i=1;i<n;i++){
	
		p->next = create_node(i);
		p = p->next;
	}
	p->next = q;

	for(int i=0;i>1;i--){
		for(int j=0;j<m-1;j++)
			p = p->next;
		p = p->next->next;
	}
	cout<<"Last player left dtanding is : "<<p->data<<"\n";
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
		cout<<"\nSINGLY LINKED LIST\n\n1.insert_start\n2.delete_end\n3.josephus_circle\n4.display\n\nenter choice : ";
		cin>>ch;

		switch(ch){
		
			case 1 : insert_end();
				 break;

			case 2 : delete_end();
				 break;

			case 3 : josephus_circle();
				 break;
			
			case 4 : display();
				 break;

			default : exit(0);
				  break;
		}
	}
	
	return 0;
}
