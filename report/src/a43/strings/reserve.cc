#include "strings.ih"

// Only reserves if the requested size exceeds the capacity.
void Strings::reserve(size_t size)
{
	if (size > d_capacity)
	{
		size = calcCapacity(size);
		resize(size);
		
		d_capacity = size;
	}
}
