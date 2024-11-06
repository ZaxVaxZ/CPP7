#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename dataType> dataType min(dataType a, dataType b)
{
	return (a < b ? a : b);
}

template <typename dataType> dataType max(dataType a, dataType b)
{
	return (a > b ? a : b);
}

template <typename dataType> void swap(dataType &a, dataType &b)
{
	dataType	c;

	c = a;
	a = b;
	b = c;
}

#endif
