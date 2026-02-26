#pragma once
#include<iostream>
using namespace std;
template<class T>
class clsDynamicArray
{
private:
	int _size = 0;
	T* _TempArray = nullptr;

public:
	T* OrijinalArray;
	clsDynamicArray(int size=0) {
		if (size < 0) {
			size = 0;
		}
		_size = size;
		OrijinalArray = new T[_size];
	}
	~clsDynamicArray() {
		delete[] OrijinalArray;
	}
	bool SetItem(int index, T val) {
		if (index < 0 || index >= _size){
			return false;
		}
		OrijinalArray[index] = val;
		return true;
	}
	void PrintList() {
		for (int i = 0; i < _size; i++) {
			cout << OrijinalArray[i]<<" ";
		}
		cout << endl;
	}
	bool IsEmpty() {
		return _size == 0;
	}
	int Size() {
		return _size;
	}
	void Resize(int NewSize) {
		if (NewSize < 0) {
			NewSize = 0;
		}
		_TempArray = new T[NewSize];
		if (NewSize < _size) {
			_size = NewSize;
		}
		for (int i = 0; i < _size; i++) {
			_TempArray[i] = OrijinalArray[i];
		}
		_size = NewSize;
		delete[] OrijinalArray;
		OrijinalArray = _TempArray;
	}
	T GetItem(int index) {
		if (index >= 0 && index < _size){
			return OrijinalArray[index];
		}
		else {
			return T();
		}
	}
	void Reverse() {
		_TempArray = new T[_size];
		for (int i = 0; i < _size; i++)
		{

			_TempArray[_size - i - 1] = OrijinalArray[i];


		}
		delete[]OrijinalArray;
		OrijinalArray = _TempArray;
	}
	void Clear() {
		delete[] OrijinalArray;
		OrijinalArray = nullptr;
		_size = 0;
	}
	bool DeleteItemAt(int index) {
		if (index >= _size||index<0) {
			return false;
		}
		
		_TempArray = new T[_size-1];
		
		for (int i = 0; i < index; i++) {
				_TempArray[i] = OrijinalArray[i];
		}
		for (int i = index + 1; i < _size; i++) {
			_TempArray[i-1] = OrijinalArray[i];
		}
		_size--;
		delete[]OrijinalArray;
		OrijinalArray = _TempArray;
		return true;
	}
	void DeleteFirstItem() {
		DeleteItemAt(0);
	}
	void DeletLasstItem() {
		DeleteItemAt(_size - 1);
	}
	int Find(T val) {
		for (int i = 0; i < _size; i++) {
			if (OrijinalArray[i] == val) {
				return i;
			}
		}
		return -1;
	 }
	bool DeleteItem(T val) {
		int index = Find(val);
		if (index == -1) {
			return false;
		}
		DeleteItemAt(index);
		return true;
	}
	bool InsertAt(int index, T val) {

		if (index > _size || index < 0)
		{
			return false;
		}
		_size++;
		_TempArray = new T[_size];
		for (int i = 0; i < index; i++) {
			_TempArray[i] = OrijinalArray[i];
		}
		_TempArray[index] = val;
		for (int i = index ; i < _size - 1; i++) {
			_TempArray[i + 1] = OrijinalArray[i];
		}
		delete[] OrijinalArray;
		OrijinalArray = _TempArray;
		return true;
	}
	bool InsertAtBeggining(T value)
	{

	    return 	InsertAt(0, value);

	}


	bool InsertBefore(T index, T value)
	{
		if (index < 1)
			return InsertAt(0, value);
		else
			return InsertAt(index - 1, value);

	}

	bool InsertAfter(T index, T value)
	{
		if (index >= _size)
			return InsertAt(_size - 1, value);
		else
			return InsertAt(index + 1, value);

	}

	bool InsertAtEnd(T value)
	{

		return InsertAt(_size, value);

	}
};

