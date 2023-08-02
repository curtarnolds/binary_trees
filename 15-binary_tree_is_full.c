#include "binary_trees.h"


/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 * Return: 0 if @tree is NULL
 *
 * Description: A binary tree is full if each node has either
 * 0 or 2 children.
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if ((tree->left && tree->right) ||
	(tree->left == NULL && tree->right == NULL))
		return (1);
	else
		return (0);

}
