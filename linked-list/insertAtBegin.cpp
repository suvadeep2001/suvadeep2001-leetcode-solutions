#include<bits/stdc++.h>
using namespace std;

class Node{

public:

int data;
Node* link;

};

void printList(Node* n)
{
	while(n != NULL)
	{
		cout<<n->data<<"->";
		n = n->link;
	}
	cout<<endl;
}

void addAtTheBegin(Node** head_ref,int data) // O(1)
{

	Node* new_node = new Node();

	new_node->data = data;

	new_node->link = (*head_ref);

	(*head_ref) = new_node;
}


void addSpecificPosition(Node* prev_node,int new_data) // O(1)
{		
	if (prev_node->link == NULL)
	{
		cout<<"This is empty!!"<<endl;
		return;
	}

	else{
		Node* new_node = new Node();

		new_node->data = new_data;

		new_node->link = prev_node->link;

		prev_node->link = new_node;

	}
}

void addAtTheEnd(Node** head_ref,int new_data)
{		
	Node* new_node = new Node();

	Node* last = (*head_ref);

	new_node->data = new_data;

	new_node->link = NULL;

	if(*head_ref == NULL){
		*head_ref = new_node;
		return;
	}

	else
	{
		while(last->link != NULL){
			last = last->link;
		}
		last->link = new_node;
		return;
	}


}


int main()
{

	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;

	head = new Node();
	second = new Node();
	third = new Node();

	head->data = 14;
	head->link = second;

	second->data = 18;
	second->link = third;

	third->data = 22;
	third->link = NULL;

	// print all nodes

	printList(head);

	addAtTheBegin(&head,12);

	addSpecificPosition(second,500);
	addAtTheEnd(&head,200);

	printList(head);

	return 0;
}