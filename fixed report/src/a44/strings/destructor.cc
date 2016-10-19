#include "strings.ih"

Strings::~Strings()
{
	for (size_t index = 0; index != d_size; ++index)
	{
		d_str[index].~string();
	}
	operator delete(d_str);
}
