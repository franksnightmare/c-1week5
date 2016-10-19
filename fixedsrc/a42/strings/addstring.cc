#include "strings.ih"

void Strings::addString(char *charArray)
{
	string *n_str = rawStrings(d_size + 1);
	for (size_t index = 0; index != d_size; ++index)
	{
		n_str[index] = d_str[index];
	}
	delete[] d_str;
	d_str = n_str;
	
	d_str[d_size] = string(charArray);
	
	++d_size;
}
