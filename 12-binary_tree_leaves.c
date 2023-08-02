#include "binary_trees.h"


/**
 * binary_tree_leaves - Counts the leaves of a binary tree
 * @tree: Pointer to the root of the tree to count the number of leaves
 * Return: 0 if @tree is NULL
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (tree->left || tree->right ? binary_tree_leaves(tree->right) +
	binary_tree_leaves(tree->left) : 1);
}
