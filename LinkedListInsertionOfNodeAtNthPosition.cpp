
#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

Node* head;

void insertion(int data,int n)//insert to insertion change 
{
	Node* temp1=new Node;
	temp1->data=data;
	temp1->next=NULL;
	if(n==1)
	{
		temp1->next=head;
		head=temp1;	
		return;
	}
	Node*temp2=head;
	for(int i=0;i<n-2;i++)
	{
		temp2=temp2->next;	
	}

	temp1->next=temp2->next;
	temp2->next=temp1;
}


void print()
{
	Node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"-";
		temp=temp->next;
	}
}


int main()
{
	head=NULL;
	insertion(2,1);
	insertion(3,2);
	insertion(4,1);
	insertion(5,2);
	print();
return 0;
}
