#include "sort.h"

/**
 * selection_sort - that sorts an array of integers
 * in ascending order using the Selection sort algorithm
 * @array: the array
 * @size: rray the lenght
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
size_t i = 0, wa = 0, to_swap = 0;
int to_comp = 0;

if (size < 2)
{
return;
}
for (i = 0; i < size - 1; i++)
{
to_comp = array[i];
to_swap = i;
for (wa = i; wa < size; wa++)
{
if (array[wa] < to_comp)
{
to_swap = wa;
to_comp = array[wa];
}
}
if (to_swap != i)
{
array[i] += array[to_swap];
array[to_swap] = array[i] - array[to_swap];
array[i] -= array[to_swap];
print_array(array, size);
}
}
}
