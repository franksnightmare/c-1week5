#include "strings.ih"

// If the array shrinks then the strings that fall
// outside of the array will be deleted.
void Strings::resize(size_t size)
{	
	if (size > d_size)
	{
		reserve(size);
		return;
	}
	
	for (size_t index = size; index != d_size; ++index)
	{
		delete d_str[index];
	}
}
