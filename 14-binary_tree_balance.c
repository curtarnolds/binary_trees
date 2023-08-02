#include "binary_trees.h"


int max(int a, int b);
int height(const binary_tree_t *node);
/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of a the tree to measure the balance factor
 * Return: 0 if @tree is NULL
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_l, height_r;

	if (tree == NULL)
		return (0);

	height_l = height(tree->left);
	height_r = height(tree->right);

	return (height_l - height_r);
}



/**
 * max - Return max
 * @a: First value
 * @b: Second value
 * Return: The max value
 */
int max(int a, int b)
{
	return ((a > b) ? a : b);
}

/**
 * height - Get the height of a node of a binary tree
 * @node: Pointer to the node
 * Return: The height or 0 on failure
*/
int height(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	return (1 + max(height(node->left), height(node->right)));
}
