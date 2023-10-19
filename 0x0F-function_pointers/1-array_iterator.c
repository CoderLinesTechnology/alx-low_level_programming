/**
*array_iterator - Array Iterator
*@array: array
*@size: size of array
*@action: function to be executed
*
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{

if (array == NULL || action == NULL)
return;

while (size-- > 0)
{
action(*array);
array++;
}

}
