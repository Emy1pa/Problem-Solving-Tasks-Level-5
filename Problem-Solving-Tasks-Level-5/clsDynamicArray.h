#pragma once
#include <iostream>
using namespace std;

template <class T>
class clsDynamicArray {

protected:
	
	int _Size = 0;
	T* _TempArray;

public:
	T* OriginalArray;

	clsDynamicArray(int size = 0){
		if (size < 0)
			size = 0;
		_Size = size;
		OriginalArray = new T[_Size];
	}

	~clsDynamicArray() {
		delete[] OriginalArray;
	}

	bool SetItem(int Index, T value) {
		if (Index >= _Size || _Size < 0)
			return false;

		OriginalArray[Index] = value;
		return true;
	}

	int Size() {
		return _Size;
	}

	bool IsEmpty() {
		return (_Size == 0 ? true : false);
	}

	void PrintList() {
		for (int i = 0; i < _Size; i++)
		{
			cout << OriginalArray[i] << " ";
		}
		cout << "\n";
	}

	void Resize(int NewSize){
		if (NewSize < 0)
			NewSize = 0;

		_TempArray = new T[NewSize];

		if (NewSize < _Size)
			_Size = NewSize;

		for (int i = 0; i < _Size; i++)
		{
			_TempArray[i] = OriginalArray[i];
		}

		_Size = NewSize;

		delete[] OriginalArray;

		OriginalArray = _TempArray;

	}

};
