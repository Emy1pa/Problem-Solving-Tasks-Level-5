#pragma once

#include <stack>
using namespace std;

class clsMyString {

private:
	string _value;
	stack <string> _Undo;
	stack <string> _Redo;

public:
	string Get() {
		return _value;
	}

	void Set(string value){
		_Undo.push(_value); 
		_value = value;
	}

	__declspec(property(get = Get, put = Set)) string value;


	void Undo(){
		if (!_Undo.empty()){
			_Redo.push(_value);
			_value = _Undo.top();
			_Undo.pop();
		}
	}

	void Redo(){
		if (!_Redo.empty()) {
			_Undo.push(_value);
			_value = _Redo.top();
			_Redo.pop();
		}
	}

};

