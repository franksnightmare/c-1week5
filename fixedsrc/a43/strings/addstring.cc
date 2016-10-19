#include "strings.ih"

void Strings::addString(char *charArray)
{
	reserve(d_size + 1);
	
	d_str[d_size] = new string;
	*d_str[d_size] = string(charArray);
	
	++d_size;
}
