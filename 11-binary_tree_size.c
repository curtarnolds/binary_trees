#include "binary_trees.h"


/**
 * binary_tree_size - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to be measured
 * Return: 0 if tree is NULL
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t height_l, height_r;

	if (tree == NULL)
		return (0);
	height_r = binary_tree_size(tree->right);
	height_l = binary_tree_size(tree->left);
	return (height_l + height_r + 1);
}
