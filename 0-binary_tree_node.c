#include "binary_trees.h"


/**
 * binary_tree_node - Creates a binary tree node
 * @parent: Pointer to the parent node of the node to create
 * @value: The value to put in the node
 * Return: Pointer to the new node or NULL on failure
 * Description:
 * When created, the node does not have any child
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = (binary_tree_t *) malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);

	newNode->left = NULL;
	newNode->right = NULL;
	newNode->parent = parent;
	newNode->n = value;

	return (newNode);
}
