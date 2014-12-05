CC=g++ -std=c++11

all: Test

Test: BinaryTree TreeNode
	$(CC) BinaryTree.o TreeNode.o Test.cpp -o Test

BinaryTree: TreeNode
	$(CC) -c "BinaryTree/BinaryTree.cpp"

TreeNode: 
	$(CC) -c "BinaryTree/TreeNode.cpp"
	
clean:
	rm *.o
	rm Test

