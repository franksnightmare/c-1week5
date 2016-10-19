#include "strings.ih"

string Strings::at(size_t index)
{
	if (index >= 0 && index < d_size)
		return d_str[index];
	string newString = "null";
	return newString;
}
