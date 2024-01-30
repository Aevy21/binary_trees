#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the number of leaf nodes in a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Number of leaf nodes, 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/* Base case: if tree is NULL, return 0 */
	if (tree == NULL)
		return (0);

	/* If the node is a leaf (no left or right child), return 1 */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* calculate the number of leaves in the left and right subtrees */
	size_t left_leaves = binary_tree_leaves(tree->left);
	size_t right_leaves = binary_tree_leaves(tree->right);

	/* Return the total number of leaves*/
	return (left_leaves + right_leaves);
}
