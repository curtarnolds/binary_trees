#include "binary_trees.h"


int _helper(const binary_tree_t *tree, int lvl, int ref_l);
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 * Return: 0 if tree is NULL
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int ref_lvl;
	const binary_tree_t *current = tree;

	if (tree == NULL)
		return (0);

	ref_lvl = 0;
	while (current->left)
	{
		current = current->left;
		ref_lvl++;
	}

	return (_helper(tree, 0, ref_lvl));
}


/**
 * _helper - Helper function to track level of leaf nodes
 * @tree: Pointer to the root of a binary tree
 * @ref_l: Given reference level
 * @lvl: Current level of a node
 * Return: 1 if levels are the same, else 0
*/
int _helper(const binary_tree_t *tree, int lvl, int ref_l)
{
	if (tree->left == NULL && tree->right == NULL)
		return (lvl == ref_l);

	if (tree->left && tree->right)
	{
		return (_helper(tree->left, lvl + 1, ref_l) &&
			   _helper(tree->right, lvl + 1, ref_l));
	}

	return (0);
}
