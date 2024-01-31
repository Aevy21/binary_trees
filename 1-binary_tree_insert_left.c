#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 *
 * @parent: Pointer to the node to insert the left-child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    /* Check if parent is NULL */
    if (parent == NULL)
        return (NULL);

    /* Use binary_tree_node to create a new node */
    binary_tree_t *new_left_node = binary_tree_node(parent, value);

    /* Check if memory allocation was successful */
    if (new_left_node == NULL)
        return (NULL);

    /* If parent already has a left-child, set the new node and update old child */
    if (parent->left != NULL)
    {
        new_left_node->left = parent->left;
        parent->left->parent = new_left_node;
    }

    /* Set the new node as the left-child of the parent */
    parent->left = new_left_node;

    /* Return a pointer to the created node */
    return (new_left_node);
}
