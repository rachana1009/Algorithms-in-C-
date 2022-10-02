

#include<bits/stdc++.h>
using namespace std;

struct Node {
	int datax;
	struct Node *lefter, *righter;
	Node(int datax)
	{
		this->datax = datax;
		lefter = righter = NULL;
	}
};

void printPostorder(struct Node* node1)
{
	if (node1 == NULL)
		return;

	// first recur on left subtree
	printPostorder(node1->lefter);

	// then recur on right subtree
	printPostorder(node1->righter);

	// now deal with the node
	cout << node1->datax << " ";
}

/* Given a binary tree, print its nodes in inorder*/
void printInorder(struct Node* node1)
{
	if (node1 == NULL)
		return;

	/* first recur on left child */
	printInorder(node1->lefter);

	/* then print the data of node */
	cout << node1->datax << " ";

	/* now recur on right child */
	printInorder(node1->righter);
}

/* Given a binary tree, print its nodes in preorder*/
void printPreorder(struct Node* node1)
{
	if (node1 == NULL)
		return;

	/* first print data of node */
	cout << node1->datax << " ";

	/* then recur on left subtree */
	printPreorder(node1->lefter);

	/* now recur on right subtree */
	printPreorder(node1->righter);
}

int main()
{
	struct Node* root = new Node(1);
	root->lefter = new Node(2);
	root->righter = new Node(3);
	root->lefter->lefter = new Node(4);
	root->lefter->righter = new Node(5);

	cout << "\nPreorder traversal of binary tree is \n";
	printPreorder(root);

	cout << "\nInorder traversal of binary tree is \n";
	printInorder(root);

	cout << "\nPostorder traversal of binary tree is \n";
	printPostorder(root);

	return 0;
}
