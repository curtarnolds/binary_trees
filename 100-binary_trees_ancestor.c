#include "binary_trees.h"


size_t _depth(const binary_tree_t *node);
/**
 * binary_trees_ancestor - Finds the lowest ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 * Return: Pointer to the lowest common ancestor of the two nodes.
 * If no common ancestor is found, return NULL
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
	const binary_tree_t *second)
{
	const binary_tree_t *current, *temp, *ref;
	size_t depth_f, depth_s;

	if (first == NULL || second == NULL)
		return (NULL);


	depth_f = _depth(first);
	depth_s = _depth(second);
	if (depth_f <= depth_s)
	{
		ref = first;
		current = second;
		temp = second;
	}
	else
	{
		ref = second;
		current = first;
		temp = first;
	}

	while (ref)
	{
		current = temp;
		while (current)
		{
			if (ref == current)
				return ((binary_tree_t *) current);
			current = current->parent;
		}
		ref = ref->parent;
	}
	return (NULL);
}


/**
 * _depth - Measures the depth of a node in a binary node
 * @node: Pointer to the node to measure the depth
 * Return: 0 if node is NULL
*/
size_t _depth(const binary_tree_t *node)
{
	size_t depth;

	if (node == NULL)
		return (0);

	depth = node->parent ? 1 + _depth(node->parent) : 0;
	return (depth);
}
