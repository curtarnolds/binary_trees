#include "binary_trees.h"


/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to the root node of a binary tree
 * Description: Does nothing if @tree is NULL
*/
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *root;

	if (tree == NULL)
		return;

	root = tree;
	if (root->left)
	{
		binary_tree_delete(root->left);
	}

	if (root->right)
	{
		binary_tree_delete(root->right);
	}
	free(root);

}
