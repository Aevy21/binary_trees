#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 *
 * @parent: Pointer to the node to insert the right-child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	/* Check if parent is NULL */
	if (parent == NULL)
		return (NULL);

	/* Allocate memory for the new node */
	binary_tree_t *new_right_node = malloc(sizeof(binary_tree_t));

	/* Check if memory allocation was successful */
	if (new_right_node == NULL)
		return (NULL);

	/* Initialize the new node with the provided values */
	new_right_node->n = value;
	new_right_node->parent = parent;
	new_right_node->left = NULL;
	new_right_node->right = NULL;

	/* If parent has a right-child, set the new node and update old right-child */
	if (parent->right != NULL)
	{
		new_right_node->right = parent->right;
		parent->right->parent = new_right_node;
	}

	/* Set the new node as the right-child of the parent */
	parent->right = new_right_node;

	/* Return a pointer to the created node */
	return (new_right_node);
}
