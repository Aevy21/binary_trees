#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 *
 * Return: Depth of the node, 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	/*  if tree is NULL, return 0 */
	if (tree == NULL)
		return (0);

	/* if the node is the root, return 0 */
	if (tree->parent == NULL)
		return (0);

	/* Recursive case: calculate the depth of the parent node and add 1 */
	return (1 + binary_tree_depth(tree->parent));

}
