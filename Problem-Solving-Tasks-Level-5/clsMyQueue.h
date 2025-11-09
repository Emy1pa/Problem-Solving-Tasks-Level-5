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

};

