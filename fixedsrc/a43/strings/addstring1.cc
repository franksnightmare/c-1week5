#include "strings.ih"

void Strings::addString(string newString)
{
	reserve(d_size + 1);
	d_str[d_size] = &newString[0];
	++d_size;
}
