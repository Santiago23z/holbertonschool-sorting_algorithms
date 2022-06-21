#include "sort.h"

/**
 * bubble_sort - sorts by comparison of 2 at a time
 * @array: array input
 * @size: size of array lenght
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
int sort = 1;
size_t a;

if (size < 2)
return;

while (sort == 1)
{
sort = 0;
for (a = 0; a < size - 1; a++)
{
if (array[a] > array[a + 1])
{
array[a] += array[a + 1];
array[a + 1] = array[a] - array[a + 1];
array[a] -= array[a + 1];
print_array(array, size);
sort = 1;
}
}
}
}
