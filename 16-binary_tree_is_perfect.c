#include "binary_trees.h"
int is_perfect_recursive(const binary_tree_t *tree, int depth, int level);
size_t binary_tree_height(const binary_tree_t *tree);
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, depth;

	/* Calculate the height of the tree */
	height = binary_tree_height(tree);

	/* Calculate the depth of the tree */
	depth = height - 1;

	/* Check if the tree is perfect by comparing depths */
	return is_perfect_recursive(tree, depth, 0);
}

/**
 * is_perfect_recursive - Helper function to recursively check if a tree is perfect
 * @tree: Pointer to the current node.
 * @depth: Depth of the tree.
 * @level: Current level in the traversal.
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int is_perfect_recursive(const binary_tree_t *tree, int depth, int level)
{
	/* Base case: if tree is NULL, it is considered perfect */
	if (tree == NULL)
		return (1);

	/* Check if the current node is a leaf node */
	if (tree->left == NULL && tree->right == NULL)
		return (depth == level);

	/* Recursive case: Check left and right subtrees */
	return (is_perfect_recursive(tree->left, depth, level + 1) &&
			is_perfect_recursive(tree->right, depth, level + 1));
}

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	/* Base case: if tree is NULL, return 0 */
	if (tree == NULL)
		return (0);

	/* Recursive case: calculate the height of the left subtree */
	left_height = binary_tree_height(tree->left);

	/* Recursive case: calculate the height of the right subtree */
	right_height = binary_tree_height(tree->right);

	/* Determine the maximum height between left and right subtrees, add 1 for current level */
	return (1 + (left_height > right_height ? left_height : right_height));
}
