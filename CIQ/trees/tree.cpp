#include<bits/stdc++.h>

using namespace std;

struct tree {
	int data;
	tree* left;
	tree* right;
};

typedef struct tree* node;
node root = NULL;

node create_node(int val){

	node temp = new tree();
	temp->data = val;
	temp->left = NULL;
	temp->right = NULL;

	return temp;
}

void insert(){

	int val;
	cout<<"Enter the node to be inserted : ";
	cin>>val;
	if(root == NULL){
		root = create_node(val);
		return;
	}
	if(root->data)
	
}

int main(){

	int ch;
	for(;;){
		cout<<"1.insert\n2.delete\n3.display\n";
		cin>>ch;
		
		switch(ch){
			
			case 1 : insert();
				 break;
			
			case 2 : delete();
				 break;
			
			case 3 : display();
				 break;

			default : cout<<"invalid option"<<endl;

		}

	return 0;
}

