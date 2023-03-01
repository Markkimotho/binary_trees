#include "binary_trees.h"

/**
  *binary_tree_insert_left - Inserts a node as the left-child of another node
  *If parent already has a left-child, the new node must take its
  *place, and the old left-child must be set as the left-child of the new node.
  *@parent: pointer to the node on the left-child in
  *@value: value to store in the new node(of left child)
  *
  *Return: return a pointer to the created node,
  *or NULL on failure or if parent is NULL
  *
  */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);

	if (parent->left)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;

	return (new_node);

}

