#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree
 *
 * Return: Height of the tree, 0 if tree is NULL
 */
size_t binary_tree_height(const struct binary_tree_s *tree)
{
	size_t left_height, right_height;

	/* Base case: if tree is NULL, return 0 */
	if (tree == NULL)
		return (0);

	/* Recursively calculate the height of the left subtree */
	left_height = binary_tree_height(tree->left);

	/* Recursively calculate the height of the right subtree */
	right_height = binary_tree_height(tree->right);

	/* Calculate the maximum height between left and right subtrees */
	if (left_height >= right_height)
		return (left_height + 1);
	else
		return (right_height + 1);

}
