#include "binary_trees.h"


/**
 * binary_tree_insert_right - Insert a node as the right child of another node
 * @parent: Pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: A pointer to the created node or NULL on failure or if parent is NULL
 *
 * Description: If parent already has a right-child, the new node takes its place
 * and the old right-child is set as the right-child of the new node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode, *tempNode;

	if (parent == NULL)
		return (NULL);

	newNode = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);

	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;

	if (parent->right)
	{
		tempNode = parent->right;
		tempNode->parent = newNode;
		newNode->right = tempNode;
	}
	parent->right = newNode;
	newNode->parent = parent;

	return (newNode);
}
