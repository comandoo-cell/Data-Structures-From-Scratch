#pragma once
#include<iostream>
#include"clsDynamicArray.h"
using namespace std;
template<class T>
class clsMyQueueArr 
{
protected: clsDynamicArray<T>_MyList;
public:
	void push(T item) {
		_MyList.InsertAtEnd(item);
	}
	void pop() {
		_MyList.DeleteFirstItem();
	}
	void Print() {
		_MyList.PrintList();
	}
	int Size() {
		return _MyList.Size();
	}
	bool IsEmpty()
	{
		return _MyList.IsEmpty();
	}
	T front() {
		return _MyList.GetItem(0);
	}
	T back() {
		return _MyList.GetItem(Size() - 1);
	}
	
	T GetItem(int index) {
		return _MyList.GetItem(index);
	}
	void Reverse() {
		_MyList.Reverse();
	}
	void UpdateItem(int index , T newVal) {
		_MyList.SetItem(index, newVal);
	}
	bool InsertAfter(int index ,T val) {
		return _MyList.InsertAfter(index, val);
	}
	bool InsertAtFront(T val) {
		return _MyList.InsertAtBeggining(val);
	}
	bool InsertAtBack(T val) {
		return _MyList.InsertAtEnd(val);
	}
	void Clear() {
		_MyList.Clear();
	}
};

