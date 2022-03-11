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

void reverselinkedlist(Node** head_ref,int len)
{
	int i = 0;
	int j = len-1;

	Node* p,*q;

	p = q = (*head_ref);
	int k;

	while(i < j){
		k = 0;

		while(k < j)
		{
		
		q = q->link;
		k++;		
		
		}
		int temp;
		temp = p->data;
		p->data = q->data;
		q->data = temp;
		i++;
		j--;
		p = p->link;
		q = (*head_ref);
	}
}


int main()
{

	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;
	Node* fourth = NULL;

	head = new Node();
	second = new Node();
	third = new Node();
	fourth = new Node();

	head->data = 14;
	head->link = second;

	second->data = 18;
	second->link = third;

	third->data = 22;
	third->link = fourth;

	fourth->data = 25;
	fourth->link = NULL;

	// print all nodes
	reverselinkedlist(&head,4);

	printList(head);

	return 0;
}