#include<iostream>
#include "LinkedList.h"
#include "Sorting.h"
#include "BTree.h"
#include <string>


//using namespace std;
class Mobile {
private:
	int price;
	std::string color;
	std::string name;
	int ram;
public:
	Mobile(int price, std::string color, std::string name, int ram) {
		this->price = price;
		this->color = color;
		this->name = name;
		this->ram = ram;
	}

	void GetMobile() {
		std::cout << "Mobile Name  : " << this->name << std::endl;
		std::cout << "Mobile Color : " << this->color << std::endl;
		std::cout << "Mobile Price : " << this->price << std::endl;
		std::cout << "Mobile Ram   : " << this->ram << std::endl;
	}
};




int main() {
	
	
	int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int brr[] = { 1, 2, 3, 4, 5, 6, 7, 9, 8, 10 };
	
	
	/*Mobile m1(20000, "Product Red", "Redmi Note 10 Pro", 8);
	m1.GetMobile();*/

	/*
				100
			99			101
		97		98    NULL  NULL
	NULL NULL NULL NULL
	*/

	TreeNode* RootNode = new TreeNode(10);
	RootNode->LeftNode = new TreeNode(20);
	RootNode->RightNode = new TreeNode(30);
	RootNode->RightNode->RightNode = new TreeNode(60);
	RootNode->LeftNode->LeftNode = new TreeNode(40);
	RootNode->LeftNode->RightNode = new TreeNode(50);
	RootNode->LeftNode->RightNode->LeftNode = new TreeNode(70);
	RootNode->LeftNode->RightNode->RightNode = new TreeNode(80);

	std::cout << "Inorder : " << std::endl;
	InorderTree(RootNode);
	std::cout << "\nPreorder : " << std::endl;
	PreorderTree(RootNode);
	std::cout << "\nPostorder : " << std::endl;
	PostorderTree(RootNode);
	int h = HeightOfBTree(RootNode);
	std::cout << "\nHeight : " << h << std::endl;
	PrintNodesAtKDistance(RootNode, 2);
	PrintLevelOrderTraversal(RootNode);
	int s = SizeOfBinaryTree(RootNode);
	std::cout << "\nSize : " << s << std::endl;
	int max = MaximumFromBTree(RootNode);
	std::cout << "Maximum From Tree : " << max << std::endl;

	return 0;
}


