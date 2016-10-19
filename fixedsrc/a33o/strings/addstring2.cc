#include "strings.ih"

void Strings::addString(char *charArray)
{
	char **n_str = new char *[d_size + 1];
	
	for (size_t index = 0; index != d_size; ++index)
	{
		n_str[index] = d_str[index];
	}
	n_str[d_size] = &charArray[0];
	
	delete d_str;
	d_str = n_str;
	++d_size;
}
