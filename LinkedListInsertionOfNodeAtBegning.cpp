#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};
	Node* head;
	void Insert(int x)
{
	Node* temp=new Node;
	temp->data=x;
	temp->next=head;
	head=temp;
}





int main()
{
	head=NULL;
	int n,x,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<" Enter the number to be entered ";
		cin>>x;
		Insert(x);
		
	}
return 0;
}
