#pragma once
struct TreeNode {
	int key;
	TreeNode* LeftNode;
	TreeNode* RightNode;
	TreeNode(int val) {
		key = val;
		LeftNode = RightNode = nullptr;
	}

};


void InorderTree(TreeNode* RootNode);
void PreorderTree(TreeNode* RootNode);
void PostorderTree(TreeNode* RootNode);
int HeightOfBTree(TreeNode* RootNode);
void PrintNodesAtKDistance(TreeNode* RootNode, int k);
void PrintLevelOrderTraversal(TreeNode* RootNode);
int SizeOfBinaryTree(TreeNode* RootNode);