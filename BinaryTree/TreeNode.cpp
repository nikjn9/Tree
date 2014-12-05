#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stack>
#include <deque>
#include "TreeNode.hpp"

using namespace std;


//====================== Stats of Nodes ================================

int TreeNode::size(){
	int size = 1;
	if(l) size += l->size();
	if(r) size += r->size();
	
	return size;
}

bool TreeNode::isLeaf(){
	return (!l && !r);
}

//======================= Traversal Algors =============================

void TreeNode::preorder(){
	
	deque <TreeNode *> q;
	TreeNode *n = this;
	
	q.push_back(n);
	
	while(!q.empty()){
		n = q.front();
		q.pop_front();
		
		printf("%3d ", n->val);
		
		if(n->r) q.push_front(n->r);
		if(n->l) q.push_front(n->l);
	}
}


void TreeNode::postorder(){
	
	stack <TreeNode *> a, b;
	TreeNode *n = this;
	
	a.push(n);
	
	while(!a.empty()){
		n = a.top();
		a.pop();
		
		b.push(n);
		
		if(n->l) a.push(n->l);
		if(n->r) a.push(n->r);
	}
	
	while(!b.empty()){
		n = b.top();
		b.pop();
		
		printf("%3d ", n->val);
	}
}


void TreeNode::bfs(){
	
	deque <TreeNode *> q;
	TreeNode *n = this;
	
	q.push_back(n);
	
	while(!q.empty()){
		n = q.front(); 
		q.pop_front();
		
		printf("%3d ", n->val);
		
		if(n->l) q.push_back(n->l);
		if(n->r) q.push_back(n->r);
	}
}


void TreeNode::inorder(){
	
	stack <TreeNode *> s;
	TreeNode *n = this;
	
wind:
	while(n != NULL){
		s.push(n);
		n = n->l;
	}
	
	while(!s.empty()){
		n = s.top(); 
		s.pop();
		
		printf("%3d ", n->val);
		
		if(n->r != NULL){
			n = n->r;
			goto wind;
		}
	}
}


void TreeNode::dfs(){
	
	deque <TreeNode *> s;
	TreeNode *n  = this;
	TreeNode *st = this;
	
	s.push_back(n);
	
	while(!s.empty() && n != st){
		n = s.front();
		s.pop_front();
		s.push_back(n);
		
		printf("%d ", n->val);
		
		if(n->r) s.push_front(n->r);
		if(n->l) s.push_front(n->l);
	}
}
