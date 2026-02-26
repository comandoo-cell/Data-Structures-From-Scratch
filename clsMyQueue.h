#pragma once
#include<iostream>
#include"clsDblLinkedList.h"
template <class T>
class clsMyQueue 
{
protected:
	clsDblLinkedList<T>_MyList;
public:
	
	void push(T Item) {
		_MyList.InsertAtEnd(Item);
    }
	void Print() {
		_MyList.PrintList();
	}
	void pop() {
		_MyList.DeleteFirstNode();
	}
	int Size() {
		return _MyList.Size();
	}
	bool IsEmpty()
	{
		return _MyList.IsEmpty();
	}
	T Front() {
		return _MyList.GetItem(0);
	}
	T Back() {
		return _MyList.GetItem(Size() - 1);
	}
	T GetItem(int index) {
		return _MyList.GetItem(index);
	}
	void Reverse() {
		_MyList.Reverse();
	}
	bool UpdateItem(int index, T NewIndex) {
		return _MyList.UpdateItem(index, NewIndex);
	}
	bool InsertAfter(int index, T val) {
		return _MyList.InsertAfter(index, val);
	}
	void InsertAtFront(T val) {
		_MyList.InsertAtBeggining(val);
	}
	void InsertAtBack(T Value){
		_MyList.InsertAtEnd(Value);
	}
	void Clear() {
		_MyList.Clear();
	}
};

