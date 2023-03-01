#include "binary_trees.h"

/**
  *binary_tree_is_root - Checks if a node is root
  *@node: pointer to the node to check
  *
  *Return: 1 if NODE IS a root,
  *	   0 if not root or is NULL
  *
  */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node)
	{
		if (node->parent == NULL)
			return (1);
		return (0);
	}
	return (0);
}
