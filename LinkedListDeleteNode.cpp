#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node *next;

	Node(int data)
	{
		this -> data = data;
		next = NULL;
	}
};

Node *create()
{
	int data;	cin>>data;
	Node *head = NULL;
	Node *temp = NULL;

	while(data != -1)
	{
		Node *newNode = new Node(data);	

		if(head == NULL)
		{
			head = newNode;
			temp = newNode;		//temp = temp->next;
		}
		else
		{
			temp -> next = newNode;
			temp = newNode;		//temp = temp->next;
		}
		cin>>data;
	}
	
	return head;
}

Node* DeleteNode(Node* head, int index)
{
	Node* temp = head;
	Node* a = NULL;
	

	if(index == 1)
	{
		a = head;
		head = temp->next;
		free(a);
		return head;
	}
	int cnt = 0;

	while(temp != NULL && cnt < index-1)
	{
		a = temp;
		temp = temp -> next;
		cnt++;
	}
		
		a->next = temp->next;
		free(temp);
		return head;	
	
}

void printList(Node *p)
{
	while(p != NULL)
	{
		cout<<p->data << " ";
		p = p -> next;
	}
}

int main()
{
	Node* head = create();

	printList(head);

	int index;	cin>>index;
	
	head = DeleteNode(head,index);
	cout<<"\n";
	printList(head);

	return 0;

}