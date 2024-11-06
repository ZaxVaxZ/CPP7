#ifndef ITER_HPP
#define ITER_HPP

template <typename dataType> void iter(dataType *array, size_t size, void (*func)(dataType &))
{
	for (size_t i = 0; i < size; i++)
		func(array[i]);
}

#endif
