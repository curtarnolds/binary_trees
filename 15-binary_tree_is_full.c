#include "binary_trees.h"


int leaf(const binary_tree_t *node);
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
	int check_l, check_r;
	if (tree == NULL)
		return (0);

	if (tree->left && tree->right)
	{
		binary_tree_is_full(tree->left);
		binary_tree_is_full(tree->right);
	}
	check_l = leaf(tree->left);
	check_r = leaf(tree->right);
	return (check_r * check_l);
}


int leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if ((node->left && node->right) || (!node->left && !node->right))
	{
		return (1);
	}
	else
		return (0);
}
