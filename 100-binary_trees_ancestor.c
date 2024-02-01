#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: Pointer to the lowest common ancestor node.
 *         If no common ancestor was found, return NULL.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	const binary_tree_t *ancestor = NULL;

	/* Check if either node is NULL */
	if (first == NULL || second == NULL)
		return (NULL);

	/* Check if either node is the ancestor of the other */
	if (first == second || first == second->parent)
		return ((binary_tree_t *)first);

	if (second == first->parent)
		return ((binary_tree_t *)second);

	/* Traverse up to find the lowest common ancestor */
	ancestor = binary_trees_ancestor(first->parent, second);
	if (ancestor != NULL)
		return ((binary_tree_t *)ancestor);

	ancestor = binary_trees_ancestor(first, second->parent);
	if (ancestor != NULL)
		return ((binary_tree_t *)ancestor);

	return (NULL); /* No common ancestor found */
}

