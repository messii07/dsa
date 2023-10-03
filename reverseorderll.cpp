#include<iostream>
#include<conio.h>
using namespace std;
class node
{
	public:
		int data;
		node* next;
		node(int data)
		{
			this->data=data;
			this->next=NULL;
		}
};
void insertattail(node* &tail, int d)
{
    node* temp = new node(d);
    tail->next = temp;
    tail = temp; // Update the tail pointer to the new node
}

void print(node* &head)
{
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
node* reverse(node* &head)
{
	node* prevptr=NULL;
	node* currptr=head;
	node* nextptr;
	
	while(currptr!=NULL)
	{
		nextptr=currptr->next;
		currptr->next=prevptr;
		prevptr= currptr;
		currptr=nextptr;
	}
	return prevptr;
}
int main()
{
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;
    print(head);
    insertattail(tail, 15);
    print(head);
    node* newhead = reverse(head);
    print(newhead); }// Print the reversed list
