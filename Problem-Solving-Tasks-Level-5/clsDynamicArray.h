
#pragma once
#include <iostream>

using namespace std;

template <class T>
class clsDynamicArray {

protected:
	
	int _Size = 0;
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

};
