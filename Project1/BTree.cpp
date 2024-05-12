#include<iostream>
#include "BTree.h"
#include<queue>

void InorderTree(TreeNode* RootNode) {

	if (RootNode != nullptr) {
		InorderTree(RootNode->LeftNode);
		std::cout << RootNode->key << "  ";
		InorderTree(RootNode->RightNode);
	}

}
void PreorderTree(TreeNode* RootNode) {

	if (RootNode != nullptr) {
		std::cout << RootNode->key << "  ";
		PreorderTree(RootNode->LeftNode);
		PreorderTree(RootNode->RightNode);
	}

}
void PostorderTree(TreeNode* RootNode) {

	if (RootNode != nullptr) {
		PostorderTree(RootNode->LeftNode);
		PostorderTree(RootNode->RightNode);
		std::cout << RootNode->key << "  ";
	}

}

int HeightOfBTree(TreeNode* RootNode) {
	if (RootNode == nullptr) {
		return 0;
	}
	else {
		return std::max(HeightOfBTree(RootNode->LeftNode), HeightOfBTree(RootNode->RightNode)) + 1;
	}
}

void PrintNodesAtKDistance(TreeNode* RootNode, int k) {
	if (RootNode == nullptr) {
		return;
	}
	if (k == 0) {
		std::cout << RootNode->key << " ";
	}
	else {
		PrintNodesAtKDistance(RootNode->LeftNode, k-1);
		PrintNodesAtKDistance(RootNode->RightNode, k-1);
	}
}

void PrintLevelOrderTraversal(TreeNode* RootNode) {
	std::cout << "\nLevel Order Traversal" << std::endl;
	if (RootNode == nullptr) {
		return;
	}
	
	std::queue<TreeNode*> q;
	q.push(RootNode);
	while (!q.empty())
	{
		TreeNode* current = q.front();
		q.pop();
		std::cout << current->key << " ";
		if (current->LeftNode != nullptr) {
			q.push(current->LeftNode);
		}
		if (current->RightNode != nullptr) {
			q.push(current->RightNode);
		}
	}
}


int SizeOfBinaryTree(TreeNode* RootNode) {
	if (RootNode == nullptr) {
		return 0;
	}

	return 1 + (SizeOfBinaryTree(RootNode->LeftNode) + SizeOfBinaryTree(RootNode->RightNode));
}

/*
	TreeNode* RootNode = new TreeNode(10);
	RootNode->LeftNode = new TreeNode(20);
	RootNode->RightNode = new TreeNode(30);
	RootNode->RightNode->RightNode = new TreeNode(60);
	RootNode->LeftNode->LeftNode = new TreeNode(40);
	RootNode->LeftNode->RightNode = new TreeNode(50);
	RootNode->LeftNode->RightNode->LeftNode = new TreeNode(70);
	RootNode->LeftNode->RightNode->RightNode = new TreeNode(80);
	
*/
