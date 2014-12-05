#ifndef TREE_NODE
#define TREE_NODE

#include <stdbool.h>
#include <stdlib.h>

class TreeNode{

public:

	int val;
	TreeNode *l, *r;
	
	TreeNode(int v): val(v), l(NULL), r(NULL) {}
	
	void inorder();
	void postorder();
	void preorder();
	void bfs();
	void dfs();
	
	int size();
	bool isLeaf();
};

#endif
