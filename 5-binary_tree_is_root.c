#include "binary_trees.h"


/**
 * binary_tree_is_root - Checks if a given node is the root of a binary tree
 * @node: Pointer to the node to check
 * Return: 0 if node is not root or is NULL, else return 1
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	else
		return (1);
}
