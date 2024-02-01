#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: Height of the tree, 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_subtree_height = 0, right_subtree_height = 0, tree_height;

    /* Base case: if tree is NULL, return 0 */
    if (tree == NULL)
        return (0);

    /* Recursive case: calculate the height of the left subtree */
    if (tree->left != NULL)
        left_subtree_height = 1 + binary_tree_height(tree->left);
    else
        left_subtree_height = 0;

    /* Recursive case: calculate the height of the right subtree */
    if (tree->right != NULL)
        right_subtree_height = 1 + binary_tree_height(tree->right);
    else
        right_subtree_height = 0;

    /* Determine the maximum height between left and right subtrees */
    tree_height = (left_subtree_height > right_subtree_height) ? left_subtree_height : right_subtree_height;

    /* Return the calculated height */
    return (tree_height);
}

/**
 * binary_tree_level_traversal - Perform Level Order Traversal recursively.
 * @tree: Pointer to the root node of the tree.
 * @level: Current level being traversed.
 * @func: Function to be applied to each visited node.
 */
void binary_tree_level_traversal(const binary_tree_t *tree, size_t level, void (*func)(int))
{
    if (tree == NULL)
        return;

    if (level == 1)
        func(tree->n);

    else if (level > 1)
    {
        binary_tree_level_traversal(tree->left, level - 1, func);
        binary_tree_level_traversal(tree->right, level - 1, func);
    }
}

/**
 * binary_tree_levelorder - Perform Level Order Traversal on a binary tree.
 * @tree: Pointer to the root node of the tree.
 * @func: Function to be applied to each visited node.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
    size_t height = binary_tree_height(tree);
    size_t level;

    if (tree == NULL || func == NULL)
        return;  /* Validate input parameters */

    
    /* Loop through each level and perform Level Order Traversal */
    for (level = 1; level <= height + 1; level++)
        binary_tree_level_traversal(tree, level, func);
}

