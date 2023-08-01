#include "binary_trees.h"


/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal
 * @tree: Pointer to the root of the tree to traverse
 * @funct: Pointer to the function to call for each node. The value of the node
 * must be passed as a parameter to this function
 * If @tree or @func is NULL, nothing
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*funct)(int))
{
	if (tree == NULL || funct == NULL)
		return;

	binary_tree_inorder(tree->left, funct);
	funct(tree->n);
	binary_tree_inorder(tree->right, funct);
}
