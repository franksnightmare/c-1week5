#include "strings.ih"

// Only reserves if the requested size exceeds the capacity.
void Strings::reserve(size_t size)
{
	if (size > d_capacity)
	{
		// Get the next power of two for the capacity.
		size = ceil(log2(size));
		size = 1 << size;
		
		string *raw = rawStrings(size);
		for (size_t index = 0; index != d_size; ++index)
		{
			new(raw + index) string(d_str[index]);
			d_str[index].~string();
		}
		
		operator delete(d_str);
		
		d_str = raw;
		d_capacity = size;
	}
}
