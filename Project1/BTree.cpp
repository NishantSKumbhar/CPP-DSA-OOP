#include<iostream>
#include "BTree.h"

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
