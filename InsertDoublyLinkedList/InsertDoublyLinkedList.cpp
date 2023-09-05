
#include <iostream>
using namespace std; 

struct Node {
	int data;
	Node* next;
	Node* prev;

};

Node* head = nullptr;

void insert (int val ); 

int main()
{
	

}

void insert (int val ) {
	Node* newNode = new Node;
	newNode->data = val ;
	if (head == NULL) head = newNode; 
	else {
		Node* temp = head; 
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = newNode; 
		newNode->prev = temp; 

	}

}
