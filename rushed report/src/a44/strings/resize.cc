#include "strings.ih"

// If the array shrinks then the strings that fall
// outside of the array will be ignored.
void Strings::resize(size_t size)
{
	if (size > d_capacity)
	{
		char **n_str = static_cast<char **>(
						operator new(size * sizeof(char *)));
		
		for (size_t index = 0; index != d_size; ++index)
			n_str[index] = d_str[index];
		
		operator delete(d_str);
		d_str = n_str;
	}
}
