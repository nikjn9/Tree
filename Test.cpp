#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "BinaryTree/BinaryTree.hpp"
#include "BinaryTree/TreeNode.hpp"

using namespace std;

/*
				10
		       /  \
		      5    \
		     / \    \
		    2   0    15
                    /  \
                  11    19
 
*/


int main(){

	TreeNode *r = new TreeNode(10);
	r->l        = new TreeNode(5);
	r->r        = new TreeNode(15);
	r->l->l     = new TreeNode(2);
	r->l->r     = new TreeNode(0);
	r->r->l     = new TreeNode(11);
	r->r->r     = new TreeNode(19);

	TreeNode *s = new TreeNode(10);
	s->l        = new TreeNode(5);
	s->r        = new TreeNode(15);
	s->l->l     = new TreeNode(2);
	s->l->r     = new TreeNode(0);
	s->r->l     = new TreeNode(11);
	//s->r->r     = new TreeNode(19);
	

	printf("%s ", BinaryTree::isIdentical(r, s) ? "Yes" : "No");

	return 0;
	
}
