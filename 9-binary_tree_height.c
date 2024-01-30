#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: Height of the tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_height = 0, right_height = 0, tree_height;

    /* Base case: if tree is NULL, return 0 */
    if (tree == NULL)
        return (0);

    /* Recursive case: calculate the height of the left subtree */
    if (tree->left != NULL)
        left_height = 1 + binary_tree_height(tree->left);
    else
        left_height = 0;

    /* Recursive case: calculate the height of the right subtree */
    if (tree->right != NULL)
        right_height = 1 + binary_tree_height(tree->right);
    else
        right_height = 0;

    /* Determine the maximum height between left and right subtrees */
    if (left_height > right_height)
        tree_height = left_height;
    else
        tree_height = right_height;

    /* Return the calculated height */
    return (tree_height);
}

