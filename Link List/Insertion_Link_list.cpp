#include<bits/stdc++.h>
using namespace std;


class Node{
	private:
		int data;
		Node *next;
	
	public:
		void insertList( int x);
		void display();
		
};

Node *Head;

void Node::insertList(int x){
	Node *temp = new Node();
	temp->data = x;
	temp->next = Head;
	Head = temp;
}
void Node::display(){
	Node *temp=Head;
	while(temp != NULL){
		cout<<temp->data<<endl;
		temp= temp->next;
	}
	
}
int main(){
	Node list;
	Head = NULL;
	
	int n,num;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>num;
		list.insertList(num);
		
	}
	list.display();
	
}
