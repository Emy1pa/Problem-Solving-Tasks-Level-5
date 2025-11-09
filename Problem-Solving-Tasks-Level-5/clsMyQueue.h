#pragma once
#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;

template <class T>
class clsMyQueue {
	
protected:
	clsDblLinkedList <T> _MyList;

public:
	
	void push(T value){
		_MyList.InsertAtTheEnd(value);
	}

	void Print(){
		_MyList.PrintList();
	}

	void Pop() {
		_MyList.DeleteFirstNode();
	}

	int Size() {
		return _MyList.Size();
	}

	bool IsEmpty() {
		return _MyList.IsEmpty();
	}

	T Front(){
		return _MyList.GetItem(0);
	}

	T Back(){
		return _MyList.GetItem(Size() - 1);
	}

	T GetItem(int Index){
		return _MyList.GetItem(Index);
	}

	void Reverse() {
		_MyList.Reverse();
	}

	bool UpdateItem(int Index, T newValue) {
		return _MyList.UpdateItem(Index, newValue);
	}

	void InsertAfter(int Index, T value) {
		_MyList.InsertAfter(Index, value);
	}

	void InsertAtFront(T value){
		_MyList.InsertAtBeginning(value);
	}

	void InsertAtBack(T value){
		_MyList.InsertAtTheEnd(value);
	}

	void Clear() {
		_MyList.Clear();
	}
};

