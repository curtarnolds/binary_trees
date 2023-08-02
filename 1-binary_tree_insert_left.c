#include "binary_trees.h"


/**
 * binary_tree_insert_left - Insert a node as the left child of another node
 * @parent: Pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: A pointer to the created node or NULL on failure or
 * if parent is NULL
 *
 * Description: If parent already has a left-child, the new node
 *  takes its place
 * and the old left-child is set as the left-child of the new node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode, *tempNode;

	tempNode = NULL;
	if (parent == NULL)
		return (NULL);

	newNode = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);

	newNode->parent = parent;
	newNode->n = value;
	newNode->right = NULL;

	if (parent->left)
	{
		tempNode = parent->left;
		tempNode->parent = newNode;
		newNode->left = tempNode;
	}
	else
		newNode->left = NULL;
	parent->left = newNode;
	newNode->parent = parent;

	return (newNode);

}
