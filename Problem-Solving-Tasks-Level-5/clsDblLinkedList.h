#pragma once
#include <iostream>
using namespace std;

template <class T>
class clsDblLinkedList {


public:
	class Node {

	public:

		T value;
		Node* prev;
		Node* next;
	};

	Node* head = NULL;

	void InsertAtBeginning(T value){
		Node* new_node = new Node();

		new_node->value = value;
		new_node->next = head;
		new_node->prev = NULL;

		if (head != NULL)
			head->prev = new_node;

		head = new_node;
		
	}

	void PrintList() {
		
		Node* temp = head;
		cout << "NULL <--> ";
		while (temp != NULL) {
			cout << temp->value << " <--> ";
			temp = temp->next;
		}
		cout << "NULL";
		
	}

	Node * Find(T value){
		Node* temp = head;
		while (temp != NULL) {
			if (temp->value == value)
				return temp;
			temp = temp->next;
		}
		return NULL;
	}

	void InsertAfter(Node * current, T value){
		Node* new_node = new Node();

		new_node->value = value;
		new_node->next = current->next;
		new_node->prev = current;

		if (current->next != NULL)
			current->next->prev = new_node;
		current->next = new_node;
	}

	void InsertAtTheEnd(T value){
		Node* new_node = new Node();
		new_node->value = value;
		new_node->next = NULL;

		if (head == NULL) {
			new_node->prev = NULL;
			head = new_node;
		}
		else {
			Node* current = head;
			while (current->next != NULL) {
				current = current->next;
			}
			current->next = new_node;
			new_node->prev = current;
		}
	}

	void DeleteNode(Node * &NodeToDelete){
		if (head == NULL || NodeToDelete == NULL)
			return;

		if (head == NodeToDelete)
			head = NodeToDelete->next;

		if (NodeToDelete->next != NULL)
			NodeToDelete->next->prev = NodeToDelete->prev;

		if (NodeToDelete->prev != NULL)
			NodeToDelete->prev->next = NodeToDelete->next;

		delete NodeToDelete;

	}

	void DeleteFirstNode() {
		if (head == NULL)
			return;
		Node* temp = head;
		head = head->next;
		if (head != NULL)
			temp->prev = NULL;
		delete temp;
	}

	void DeleteLastNode() {
		if (head == NULL)
			return;
		if (head->next == NULL) {
			delete head;
			head = NULL;
			return;
		}
		Node* current = head;
		while (current->next->next != NULL)
			current = current->next;

		Node* temp = current->next;
		current->next = NULL;
		delete temp;
	}

	
};

