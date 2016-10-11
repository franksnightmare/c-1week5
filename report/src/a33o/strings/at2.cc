#include "strings.ih"

string const Strings::at(size_t index) const
{
	if (index >= 0 && index < d_size)
		return d_str[index];
	return "null";
}
