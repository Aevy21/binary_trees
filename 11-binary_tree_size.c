#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Size of the tree, 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size, right_size;

	/* Check if tree is NULL */
	if (tree == NULL)
		return (0);

	/* Calculate the size of the left subtree */
	if (tree->left == NULL)
		left_size = 0;
	else
		left_size = binary_tree_size(tree->left);

	/* Calculate the size of the right subtree */
	if (tree->right == NULL)
		right_size = 0;
	else
		right_size = binary_tree_size(tree->right);

	/* Return the total size plus 1 */
	return ((left_size + right_size) + 1);
}
