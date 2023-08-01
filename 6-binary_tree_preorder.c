#include "binary_trees.h"


/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal
 * @tree: Pointer to the root of the tree to traverse
 * @func: Pointer to the function to call for each node. The value of the node
 * must be passed as a parameter to this function
 * If @tree or @func is NULL, nothing
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*funct)(int))
{
	if (tree == NULL || funct == NULL)
		return;

	funct(tree->n);
	binary_tree_preorder(tree->left, funct);
	binary_tree_preorder(tree->right, funct);
}
