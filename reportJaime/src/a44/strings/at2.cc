#include "strings.ih"

char const *Strings::at(size_t index) const
{
	return d_str[index];
}
