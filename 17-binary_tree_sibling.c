#include "binary_trees.h"


/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: Pointer to the node to find the sibling
 * Return: Pointer to the sibling node. If @node is NULL or the parent
 * is NULL, return NULL. If node has no sibling, return NULL
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *_parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	_parent = node->parent;
	if (_parent->left && _parent->left != node)
		return (_parent->left);
	else if (_parent->right && _parent->right != node)
		return (_parent->right);
	return (NULL);

}
