//Stefan Emmons
//COSC 2030 - 01
//Lab 04
//Dr.Hill, or Pedro Marquez
//3-4-2019

#include<iostream>

using namespace std;

struct Node
{
	int value;
	struct Node * rightNode = NULL;
	struct Node * leftNode = NULL;
};

Node * searchNode(Node * root, int value)
{
	Node * rightResult;
	Node * leftResult;
	if(root == NULL)
	{
		return NULL;
	}
	else if (root->value == value)
	{
		return root;
	}
	else
	{
		rightResult = searchNode(root->rightNode, value);
		leftResult = searchNode(root->leftNode, value);
		if (rightResult == NULL && leftResult == NULL)
		{
			return NULL;
		}
		else if(rightResult != NULL)
		{
			return rightResult;
		}
		else
		{
			return leftResult;
		}
	}
}

void insertLeft(Node * Parent, Node * nodeToInsert)
{
	//This may not be entirely neccessary, but it helps me to visualize how each new node is created and placed.
	Parent->leftNode = nodeToInsert;
}


void insertRight(Node * Parent, Node * nodeToInsert)
{
	//This may not be entirely neccessary, but it helps me to visualize how each new node is created and placed.
	Parent->rightNode = nodeToInsert;
}


int inOrderTransversal(Node * root)
{
	if(root != NULL)
	{
		inOrderTransversal(root->leftNode);
		cout << root->value << endl;
		inOrderTransversal(root->rightNode);
	}
	return 0;
}

int postOrderTransversal(Node * root)
{
	//This follows much of the same style as the pre-created inOrder function. However instead of the
	//left root right traversal style, this follows the left right root traversal style. 
	if (root != NULL)
	{
		postOrderTransversal(root->leftNode);
		postOrderTransversal(root->rightNode);
		cout << root->value << endl;
	}
	return 0;
}

int preOrderTransversal(Node * root)
{
	//This follows much of the same style as the pre-created inOrder function. However instead of the
	//left root right traversal style, this follows the root left righ traversal style. 
	if (root != NULL)
	{
	 	cout << root->value << endl;
		preOrderTransversal(root->leftNode);
		preOrderTransversal(root->rightNode);
	}
	return 0;
}



int main()
{
	//This block of code represents the "original" tree formation. All other nodes will stem from this base.
	Node * BinaryTree = new Node;
	BinaryTree->value = 5;
	Node * tmp = new Node;
	tmp->value = 1;
	BinaryTree->rightNode = tmp;
	tmp = new Node;
	tmp->value = 4;
	BinaryTree->leftNode = tmp;
	

	//This block of code is using a Binary Tree Search algorithm. We first create a new pointer to the Node struct
	// and define it as the result for the Binary Tree Search.
	//From there, each root/parent node is defined beforehand, and the corresponding child node is added via the
	//tmp node.
	//This process is repeated as neccessary until we create the tree defined in the assignment. 
	Node * searchResult = searchNode(BinaryTree, 1);
	tmp = new Node;
	tmp->value = 7;
	insertRight(searchResult, tmp);
	searchResult = searchNode(BinaryTree, 7);
	tmp = new Node;
	tmp->value = 9;
	insertRight(searchResult, tmp);
	searchResult = searchNode(BinaryTree, 4);
	tmp = new Node;
	tmp->value = 10;
	insertLeft(searchResult, tmp);
	searchResult = searchNode(BinaryTree, 4);
	tmp = new Node;
	tmp->value = 15;
	insertRight(searchResult, tmp);
	searchResult = searchNode(BinaryTree, 15);
	tmp = new Node;
	tmp->value = 8;
	insertLeft(searchResult, tmp);
	//Each individual print statement labels what traversal is being displayed, while each corresponding function is called.
	cout << "The following is the 'In-order' traversal;" << endl;
	inOrderTransversal(BinaryTree);

	cout << "The following is the 'Pre-order' traversal;" << endl;
	preOrderTransversal(BinaryTree);

	cout << "The following is the 'Post-order' traversal;" << endl;
	postOrderTransversal(BinaryTree);
	cout << endl;
	system("pause");
	return 0;
}
