#include "binary_trees.h"


/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: The pointer to the node to find the uncle
 * Return: Pointer to the uncle node or NULL if node is NULL,
 * or node has no uncle
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *_parent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	_parent = node->parent;
	if (_parent->parent->left && _parent->parent->left != node->parent)
		return (_parent->parent->left);
	else if (_parent->parent->right && _parent->parent->right != node->parent)
		return (_parent->parent->right);
	return (NULL);
}
