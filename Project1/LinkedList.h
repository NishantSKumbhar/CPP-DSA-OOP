#pragma once
struct Node {
	int value;
	Node* NEXT;

	Node(int val) {
		value = val;
		NEXT = nullptr;
	}
	
};

void PrintLinkedList(Node* Header);
int GetLengthOfLinkedList(Node* Header);
Node* AddNodeAtEndLinkedList(Node* Header, Node* n);
Node* AddNodeToFirstLinkedList(Node* Header, Node* n);
Node* DeleteNodeAtEndLinkedList(Node* Header);
Node* DeleteNodeToFirstLinkedList(Node* Header);
Node* AddNodeToSpecificPosition(Node* Header, Node* n, int p);