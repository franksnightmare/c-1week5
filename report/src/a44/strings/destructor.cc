#include "strings.ih"

Strings::~Strings()
{
	operator delete(d_str);
}
