
#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

Node* head = NULL; 

void Insert(int x)
{
   Node* newnode = new Node;
   newnode->data=x;
   newnode->next=NULL;

   if(head == NULL)
   {
        head=newnode;
   }
   else
   {
        Node* last=head;
        while(last->next != NULL) last=last->next;
        last->next = newnode;
   }
}
void Print()
{
	while (head != NULL) {
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}	


int main()
{
	int n,x,i;
	cout<<"Enter the value how much node you want to enter"<<"\n";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<" Enter the number to be entered ";
		cin>>x;
		Insert(x);
	}
    Print();
    return 0;
}


