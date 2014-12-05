#ifndef BINARY_TREE
#define BINARY_TREE

#include <stdbool.h>
#include "TreeNode.hpp"

class BinaryTree{
	
public:
	
	TreeNode *root;
		
	 BinaryTree() : root(NULL) {}
	~BinaryTree(){}
	
	int size();
	
	static bool isIdentical(TreeNode *a, TreeNode *b);
};

#endif
