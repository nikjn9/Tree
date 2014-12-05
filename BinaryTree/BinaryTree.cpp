#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "TreeNode.hpp"
#include "BinaryTree.hpp"


int BinaryTree::size(){
	return root->size();
}

bool BinaryTree::isIdentical(TreeNode *a, TreeNode *b){
	if(a == NULL && b == NULL) return true;
	if(a == NULL || b == NULL) return false;
	
	if(a->val != b->val) return false;
	if(a->isLeaf() && b->isLeaf()) return true;
	
	return isIdentical(a->l, b->l) && isIdentical(a->r, b->r);
}
