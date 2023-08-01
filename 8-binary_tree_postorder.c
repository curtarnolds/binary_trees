#include "binary_trees.h"


/**
 * binary_tree_postorder - Goes through a binary tree using in-order traversal
 * @tree: Pointer to the root of the tree to traverse
 * @funct: Pointer to the function to call for each node. The value of the node
 * must be passed as a parameter to this function
 * If @tree or @func is NULL, nothing
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*funct)(int))
{
	if (tree == NULL || funct == NULL)
		return;

	binary_tree_postorder(tree->left, funct);
	binary_tree_postorder(tree->right, funct);
	funct(tree->n);
}
