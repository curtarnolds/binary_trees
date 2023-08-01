#include "binary_trees.h"


/**
 * binary_tree_is_leaf - Checks if a node in a binary tree is a leaf
 * @node: Pointer to the node to check
 * Return: 1 if @node is a leaf, else return 0
 * Return 0 if node is NULL
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);
	else
		return (1);
}
