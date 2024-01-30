#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal
 *
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node's value
 */
void binary_tree_inorder(const struct binary_tree_s *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* Traverse the left subtree */
	binary_tree_inorder(tree->left, func);

	/* Process the current node's value */
	func(tree->n);

	/* Traverse the right subtree */
	binary_tree_inorder(tree->right, func);
}
