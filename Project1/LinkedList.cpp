#include<iostream>
#include"LinkedList.h"
using namespace std;



void PrintLinkedList(Node* Header) {
	std::cout << "Linked List" << std::endl;
	if (Header == nullptr) {
		std::cout << "\n****** Linked List is Empty ******\n" << std::endl;
		return;
	}
	Node* H = Header;
	while (H) {
		std::cout << H->value << " ---> ";
		H = H->NEXT;
	}
	std::cout << std::endl;
}



int GetLengthOfLinkedList(Node* Header) {
	int c = 0;
	if (Header == nullptr) {

		return c;
	}
	Node* H = Header;
	while (H)
	{
		H = H->NEXT;
		c++;
	}
	return c;
}

Node* AddNodeAtEndLinkedList(Node* Header, Node* n) {
	if (n->NEXT != nullptr) {
		std::cout << "\n****** Node which is trying to add is not a new Node ******\n" << std::endl;
		return Header;
	}
	Node* H = Header;
	while (H->NEXT)
	{
		H = H->NEXT;
	}
	H->NEXT = n;
	return Header;
}

Node* AddNodeToFirstLinkedList(Node* Header, Node* n) {
	if (n->NEXT != nullptr) {
		std::cout << "\n****** Node which is trying to add is not a new Node ******\n" << std::endl;
		return Header;
	}
	n->NEXT = Header;
	return n;
}

Node* DeleteNodeAtEndLinkedList(Node* Header) {
	if (Header->NEXT == nullptr) {
		Header = nullptr;
		return Header;
	}

	Node* H = Header;
	while (H->NEXT->NEXT)
	{
		H = H->NEXT;
	}
	H->NEXT = nullptr;
	delete H->NEXT;
	return Header;
}

Node* DeleteNodeToFirstLinkedList(Node* Header) {
	if (Header->NEXT == nullptr) {
		Header = nullptr;
		return Header;
	}
	Node* H = Header->NEXT;
	Header = nullptr;
	delete Header;
	return H;
}

Node* AddNodeToSpecificPosition(Node* Header, Node* n, int p) {
	int l = GetLengthOfLinkedList(Header);
	if (p > l + 1 || p < 1) {
		std::cout << "\n****** Position is not valid ******\n" << std::endl;
		return Header;
	}
	if (l == 0) {   // linked list is empty
		Header = n;
		return Header;
	}
	if (p == 1) {
		n->NEXT = Header;
		return n;
	}
	int c = 2;
	Node* H = Header;
	while (c != p)
	{
		H = H->NEXT;
		c++;
	}
	if (H->NEXT != nullptr) {
		Node* temp = H->NEXT;
		H->NEXT = n;
		n->NEXT = temp;
	}
	else {
		H->NEXT = n;
	}
	return Header;

}

