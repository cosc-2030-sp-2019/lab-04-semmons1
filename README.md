# cosc-2030-lab04-binarytrees
Stefan Emmons <br/>
COSC 2030-01 <br/>
Lab 04 <br/>
Dr. Hill, or Pedro Marquez <br/>
3-4-2019 <br/>
# Binary Search
A binary search is an algorithm that searches through an ordered list or sorted array and continously divides the search time in half. It begins at the middle index of a given array, and compares this element with the desired key value. If the two do not match, the half of the array that the key value cannot be in (the elements are too large or small) is ignored, and the search is carried out in the middle of the second half of the array. This process is continued until the key value is matched, or cannot be found. This is why the Big-Oh value of the Binary Search algorithm is O(logn).<br/>
# Binary Tree
A binary tree is a data structure built from nodes. It's basically a linked list structure, but more useful. It consists of a root node, with two children nodes. These children nodes can only be classified as the left child or right child. A root node can have no more than two children nodes, but it can have one or zero.<br/>
# Binary Search Tree 
A binary search tree is a specific type of binary tree with a very specific structure. These specific properties are as follows:<br/>
The left subtree of a node can only have subnodes that contain keys or values less than the original root key or value.<br/>  
The right subtree of a node can only have subnodes that contains keys or values greater than the original root key or value.<br/>
The left and right subtrees need to be binary search trees, that is, each new subtree must follow the same format as it's parent tree.<br/> 
