#include "strings.ih"

// Only reserves if the requested size exceeds the capacity.
void Strings::reserve(size_t size)
{	
	if (size > d_capacity)
	{
		size = calcCapacity(size);
		
		char **n_str = new char*[size];
		for (size_t index = 0; index != d_size; ++index)
			n_str[index] = d_str[index];
		
		delete[] d_str;
		d_str = n_str;
		
		d_capacity = size;
	}
}
