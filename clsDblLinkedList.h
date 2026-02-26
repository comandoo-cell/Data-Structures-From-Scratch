#pragma once
#include<iostream>
using namespace std;
template <class T>
class clsDblLinkedList
{
private:
	int _Size = 0;

public:
	class node
	{
	public:
		T val;
		node* next;
		node* prev;
		
	};



	node* head = NULL;
	void InsertAtBeggining(  T val) {
		node *newnode = new node();
		newnode->val = val;
		newnode->next = head;
		newnode->prev = NULL;
		if (head != NULL) {
			head->prev = newnode;
		}
		head = newnode;
		_Size++;
	}
	void PrintList() {
		node* Head = head;
		
		while (Head != NULL) {
			cout << Head->val << " ";
			Head = Head->next;
		}
		
	}
	node* Find(T val) {
		node* Head = head;
		while (Head != NULL) {
			if (Head->val == val) {
				return Head;
			}
			Head = Head->next;
		}
		return NULL;
	}
	void InsertAfter(node* current, T val) {
		if (current == NULL) {
			return;
		}
		node* newnode = new node();
		newnode->val = val;
		newnode->next = current->next;
		newnode->prev = current;
		if (current->next!= NULL) {
			current->next->prev = newnode;
		}
		current->next = newnode;
		_Size++;
	}
	
	void InsertAtEnd(T val) {
		node* newnode = new node();
		newnode->val = val;
		newnode->next = NULL;

		if (head == NULL) {
			newnode->prev = NULL;
			head = newnode;
			_Size++;
		}
		else {
			node* current = head;
			while (current->next != NULL) {
				current = current->next;
			}
			current->next = newnode;
			newnode->prev = current;
			_Size++;
		}
	}
	void DeleteNode(node*& NodeToDelete) {
		if (head == NULL || NodeToDelete == NULL) return;

		if (head == NodeToDelete) {
			head = NodeToDelete->next;
			if (head != NULL)
				head->prev = NULL;
		}
		else {
			if (NodeToDelete->next != NULL)
				NodeToDelete->next->prev = NodeToDelete->prev;

			if (NodeToDelete->prev != NULL)
				NodeToDelete->prev->next = NodeToDelete->next;
		}

		_Size--;
		delete NodeToDelete;
		NodeToDelete = NULL;
	}
	void DeleteFirstNode(){
		if (head == NULL) { return; }
		node* temp = head;
		head = head->next;
		if (head != NULL) {
			head->prev = NULL;
		}
		_Size--;
		delete temp; 
	}
	void DeleteLastNode() {

		if (head == NULL) {
			return;
		}

		if (head->next == NULL) {
			delete head;
			head = NULL;
			_Size--;
			return;
		}
        node* current = head;
		
		while (current->next->next != NULL)
		{
			current = current->next;
		}

		node* temp = current->next;
		current->next = NULL;
		_Size--;
		delete temp;

	}
	int Size() {
		return _Size;
	}
	bool IsEmpty() {
		return _Size == 0;
	}
	void Clear() {
		while (!IsEmpty()) {
			DeleteFirstNode();
		}
	}
	void Reverse() {
		node* current = head;
		node* temp = NULL;
		while (current != NULL) {
			temp = current->prev;
			current->prev = current->next;
			current->next = temp;
			current = current->prev;
		}
		if (temp != NULL) {
			head = temp->prev;
		}
	}
	
	node* GetNode(int index) {
		if (index < 0 || index >= _Size) {
			return NULL;
		}
		node* current = head;
		int indexCounter = 0;
		while (current!=NULL) {
			
			if (indexCounter == index) {
				return current;
			}
			indexCounter++;
			current = current->next;

		}
		return NULL;
	}
	T GetItem(int index) {

		node* ItemNode = GetNode(index);
		if (ItemNode == NULL) {
			return T();//-> (0) في حال كان نول بيرجع 
		}
		return ItemNode->val;
		
	}
	bool UpdateItem(int index, T NewIndex) {
	   node* temp=	GetNode(index);
	   if (temp != NULL) {  
		   temp->val = NewIndex;
		   return true;
	   }
	   return false;
	}
	bool InsertAfter(int index, T val) {
		
		node* getitem = GetNode(index);
		if (getitem != NULL) {
			InsertAfter(getitem, val);
			return true;
		}
		return false;

	}
};

