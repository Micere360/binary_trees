#include "binary_trees.h"

/**
 * array_to_heap - function that builds a Max Binary Heap tree from an array
 *
 * @array: pointer to the first element of the array to be converted
 * @size: number of element in the array
 * Return: function must return a pointer to the root node of the created Binary Heap, or NULL on failure
 */
heap_t *array_to_heap(int *array, size_t size)
{
	heap_t *tree;
	size_t ix;

	tree = NULL;

	for (x = 0; x < size; x++)
	{
		heap_insert(&tree, array[x]);
	}

	return (tree);
}
